# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:36:23 by ninieddu          #+#    #+#              #
#    Updated: 2021/11/03 17:41:18 by ninieddu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Zombie.cpp ZombieHorde.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CLPP			= clang++
RM				= rm -f
CLPPFLAGS		= -Wall -Wextra -Werror

NAME			= ZombieHorde

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CLPP) $(CLPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
