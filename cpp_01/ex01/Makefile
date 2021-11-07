# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 14:07:26 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/07 23:46:16 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	ZombieHorde

COMP 	=	c++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Zombie.cpp ZombieHorde.cpp

INCS	=	Zombie.hpp

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