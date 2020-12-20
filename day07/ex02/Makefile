SRCS=main.cpp
INC=Array.hpp
NAME=array

all:	$(NAME)

$(NAME): $(SRCS) $(INC)
	clang++ -o $(NAME) $(SRCS) -Wall -Werror -Wextra -Wconversion -std=c++98 -fsanitize=address -g3

re:	fclean all

fclean:
	rm -rf $(NAME)

.PHONY: all re fclean