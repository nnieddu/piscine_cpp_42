SRCS			= Karen.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

COMP				= c++
RM				= rm -f
COMPFLAGS		= -Wall -Wextra -Werror -I.

NAME		= karenFilter

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(COMP) $(COMPFLAGS) -o $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
