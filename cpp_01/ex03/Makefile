# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:42:20 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/03 17:43:05 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS			= $(SRCS:.cpp=.o)

CLPP			= clang++
RM				= rm -f
CLPPFLAGS		= -Wall -Wextra -Werror

NAME			= Unnecessary_violence

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CLPP) $(CLPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
