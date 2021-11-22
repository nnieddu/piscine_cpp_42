# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 11:46:12 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/22 04:12:11 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Interfaces

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp main.cpp

INCS	=	AMateria.hpp Character.hpp MateriaSource.hpp Ice.hpp Cure.hpp IMteriaSource.hpp ICharacter.hpp 

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