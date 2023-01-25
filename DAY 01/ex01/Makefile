# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 18:14:13 by sgmira            #+#    #+#              #
#    Updated: 2023/01/25 18:55:13 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC =  main.cpp zombieHorde.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp 
	$(CC) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -I Zombie.hpp  -o $(NAME)

all: $(NAME)


clean:
	$(RM) $(OBJ)   

fclean: clean
	$(RM) $(NAME)

re: fclean all