# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:14:13 by sgmira            #+#    #+#              #
#    Updated: 2023/01/10 18:18:14 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC =  main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(SRC) -I Zombie.hpp  -o $(NAME)

clean:
	$(RM) $(OBJ)   

fclean: clean
	$(RM) $(NAME)

re: fclean all