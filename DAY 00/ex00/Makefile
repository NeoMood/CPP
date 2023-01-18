NAME = megaphone

CC = c++

OBJECTS = megaphone.o

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) -Wall -Wextra -Werror megaphone.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -Wall -Wextra -Werror -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all