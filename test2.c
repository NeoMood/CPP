#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void ft_puterror(char *msg, char *cause)
{
    while(*msg)
        write(2, msg++, 1);
    if(cause)
        while(*cause)
            write(2, cause++, 1);
}

int ft_execute(char **av, int i, int tmp_fd, char **env)
{
    av[i] == NULL;
    dup2(tmp_fd, 0);
    close(tmp_fd);
    execve(av[0], av, env);
    return(ft_putstr("error: cannot execute ", av[0]));
}

int main(int ac, char **av, char **env)
{
    int i;
    int tmp_fd;
    int fd[2];
    (void) ac;

    i = 0;
    tmp_fd = dup(0);
    while(av[i] && av[i + 1])
    {
        av = &av[i+1];

        i = 0;
        while(av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
            i++;
        if(strcmp(av[i], "cd"))
        {
            if (i != 2)
                ft_puterror("error: cd: bad arguments", NULL);
            else if(chdir(av[1] != 0))
                ft_puterror("error: cd: cannot change directory to ", av[1]);
        }
        else if (i != 0 && (av[i] == NULL || strcmp(av[i], ";") == 0))
        {
            if(fork() == 0)
            {
                if(ft_execute(av, i, tmp_fd, env))
                    return 1;
            }
            else
            {
                close(tmp_fd);
                while(waitpid(-1, NULL, WUNTRACED) != -1)
                    ;
                tmp_fd = dup(0);
            }
        }
        else if (i != 0 && strcmp(av[i], "|") == 0)
        {
            pipe(fd);
            if(fork() == 0)
            {
                dup2(fd[1], 1);
                close(fd[0]);
                close(fd[1]);
                if(ft_execute(av, i, tmp_fd, env))
                    return(1);
            }
            else
            {
                close(fd[1]);
                close(tmp_fd);
                tmp_fd = fd[0];
            }
        }
    }
    close(tmp_fd);
    return(0);
}