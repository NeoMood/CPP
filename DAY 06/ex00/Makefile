# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 05:12:58 by sgmira            #+#    #+#              #
#    Updated: 2023/02/22 05:13:40 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ScalarConverter

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = ScalarConverter.hpp 

SRCS = main.cpp \
	   ScalarConverter.cpp \

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