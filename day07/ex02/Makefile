SRCS=main.cpp
NAME=array

all:	$(NAME) $(SRCS)

$(NAME):
	clang++ -o $(NAME) $(SRCS) -Wall -Werror -Wextra

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean