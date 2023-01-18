# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 16:53:49 by sgmira            #+#    #+#              #
#    Updated: 2023/01/13 16:54:26 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp 
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all