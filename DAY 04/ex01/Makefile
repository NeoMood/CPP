# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 17:31:32 by sgmira            #+#    #+#              #
#    Updated: 2023/02/04 18:05:23 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = animal

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp

SRCS =	Animal.cpp\
		WrongAnimal.cpp\
		Cat.cpp\
		WrongCat.cpp\
		Dog.cpp\
		Brain.cpp\
		main.cpp\

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(INL)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all