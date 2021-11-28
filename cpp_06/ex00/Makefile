# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 11:46:12 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/28 13:06:58 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert

COMP 	=	clang++

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