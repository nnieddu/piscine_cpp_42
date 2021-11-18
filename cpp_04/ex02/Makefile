# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 17:27:26 by ninieddu          #+#    #+#              #
#    Updated: 2021/10/28 15:27:55 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	AbstractClass

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

INCS	=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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
