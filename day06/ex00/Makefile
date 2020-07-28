SRCS=main.cpp
NAME=converter

$(NAME): all

all:
	clang++ $(SRCS) -Wall -Werror -Wextra -o $(NAME)

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean