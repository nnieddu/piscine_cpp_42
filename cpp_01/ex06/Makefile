SRCS			= Karen.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CLPP				= clang++
RM				= rm -f
CLPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= karenFilter

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CLPP) $(CLPPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
