# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 06:10:57 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/23 09:59:57 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Forms

COMP 	=	clang++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp 

INCS	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

OBJ		=	$(SRC:.cpp=.o)

%.o : %.cpp $(INCS)
	$(COMP) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLAG) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ) *_shrubbery

fclean :
	rm -f $(NAME) $(OBJ) *_shrubbery

re : fclean all

.PHONY : all clean fclean re