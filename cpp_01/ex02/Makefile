# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:36:17 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/08 07:43:17 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	HiThisIsBrain

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp

INCS	=	

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