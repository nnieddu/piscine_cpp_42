# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 13:48:57 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/07 14:10:51 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 		=	Zombie

CLPP 		=	clang++

FLAG		=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INCS		=	Zombie.hpp

OBJ			=	$(SRC:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CLPP) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CLPP) $(FLAG) $(OBJ) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean :
	@rm -f $(NAME) $(OBJ)

re : fclean all

.PHONY : all clean fclean re