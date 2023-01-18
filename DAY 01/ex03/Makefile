# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 20:10:14 by sgmira            #+#    #+#              #
#    Updated: 2023/01/12 20:34:03 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = Violence

# CC = c++
# FLAGS = -Wall -Wextra -Werror -std=c++98
# RM = rm -f

# SRC =  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# OBJ = $(SRC:.cpp=.o)

# # %.o: %.cpp 
# # 	$(CC) $(FLAGS) -c $< -o $@
	
# $(NAME): $(OBJ) 
# 	$(CC) $(FLAGS) $(OBJ) -I Weapon.hpp HumanA.hpp HumanB.hpp -o $(NAME)

# all: $(NAME)


# clean:
# 	$(RM) $(OBJ)   

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all


NAME = violence

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = main.cpp \
	   HumanA.cpp \
	   HumanB.cpp \
	   Weapon.cpp 

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