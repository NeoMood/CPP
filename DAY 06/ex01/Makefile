# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 23:51:48 by sgmira            #+#    #+#              #
#    Updated: 2023/02/22 23:52:32 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Serializer.hpp

SRCS = main.cpp \
	   Serializer.cpp \

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