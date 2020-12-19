SRCS=main.cpp
NAME=identifier

all:	$(NAME)

$(NAME):	$(SRCS)
	clang++ -o $(NAME) $(SRCS) -Wall -Werror -Wextra -fsanitize=address -g3

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean