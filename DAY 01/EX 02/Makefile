# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 14:33:12 by sgmira            #+#    #+#              #
#    Updated: 2023/01/11 14:34:21 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HiThisIsBrain

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC =  main.cpp
OBJ = $(SRC:.cpp=.o)

# %.o: %.cpp 
# 	$(CC) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)   

fclean: clean
	$(RM) $(NAME)

re: fclean all