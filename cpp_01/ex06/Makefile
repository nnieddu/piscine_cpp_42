# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 10:28:06 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/08 11:26:42 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= karenFilter

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Karen.cpp main.cpp

INCS	=	Karen.hpp

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