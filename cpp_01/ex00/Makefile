# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 16:14:47 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/03 16:18:12 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Zombie.cpp randomChump.cpp newZombie.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CLPP			= clang++
RM				= rm -f
CLPPFLAGS		= -Wall -Wextra -Werror

NAME			= Zombie

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CLPP) $(CLPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

