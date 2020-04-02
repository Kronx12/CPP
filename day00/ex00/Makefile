NAME=megaphone
CC=clang++
FLAGS=-Wall -Wextra -Werror
SRCS=megaphone.cpp
RM=rm -f

all:		$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	$(RM) $(NAME)

re:			fclean all

.PHONY: all re fclean clean