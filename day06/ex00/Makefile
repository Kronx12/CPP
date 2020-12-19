SRCS=main.cpp
NAME=convert

all:	$(NAME)

$(NAME):	$(SRCS)
	clang++ -o $(NAME) $(SRCS) -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean