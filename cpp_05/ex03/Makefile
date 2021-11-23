# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 16:34:46 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/23 10:04:28 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Intern

COMP 	=	clang++

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

INCS	=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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