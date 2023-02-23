# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 17:43:25 by sgmira            #+#    #+#              #
#    Updated: 2023/02/20 19:00:35 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

SRCS = main.cpp \
	   Bureaucrat.cpp \
	   AForm.cpp \
	   Intern.cpp \
	   ShrubberyCreationForm.cpp \
	   RobotomyRequestForm.cpp \
	   PresidentialPardonForm.cpp \

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