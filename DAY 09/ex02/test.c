#include <stdio.h>

void rec(int i)
{
    if (i <= 1)
    {
        printf("YES!\n");
        return ;
    }
    rec(i / 2);
    printf("Rec(%d) \n", i);
}

int main()
{
    rec(12);
}