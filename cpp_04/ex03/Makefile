# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 17:14:48 by ninieddu          #+#    #+#              #
#    Updated: 2021/10/28 17:17:18 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Interface&recap

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	AMateriaClass.cpp CharacterClass.cpp CureClass.cpp IceClass.cpp MateriaSourceClass.cpp main.cpp

INCS	=	AMateriaClass.hpp CharacterClass.hpp ICharacterClass.hpp CureClass.hpp IceClass.hpp MateriaSourceClass.hpp IMateriaSourceClass.hpp

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
