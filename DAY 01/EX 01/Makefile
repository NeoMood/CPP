# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:14:13 by sgmira            #+#    #+#              #
#    Updated: 2023/01/10 20:29:45 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC =  main.cpp zombieHorde.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(SRC) -I Zombie.hpp  -o $(NAME)

clean:
	$(RM) $(OBJ)   

fclean: clean
	$(RM) $(NAME)

re: fclean all