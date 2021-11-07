# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:42:20 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/07 23:48:16 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	Unnecessary_violence

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

INCS	=	HumanA.hpp HumanB.hpp Weapon.hpp

OBJ		=	$(SRC:.cpp=.o)

%.o : %.cpp $(INCS)
	$(COMP) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAG) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME) $(OBJ)

re : fclean all

.PHONY : all clean fclean re