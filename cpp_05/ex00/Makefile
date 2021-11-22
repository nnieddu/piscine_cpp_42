# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 11:46:12 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/22 05:12:28 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Bureaucrat

COMP 	=	clang++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Bureaucrat.cpp main.cpp

INCS	=	Bureaucrat.hpp 

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