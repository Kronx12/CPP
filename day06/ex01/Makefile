SRCS=main.cpp
NAME=serializer

all:	$(NAME)

$(NAME):
	clang++ -o $(NAME) $(SRCS) -Wall -Werror -Wextra

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean