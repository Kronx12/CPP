CC=clang++
FLAGS=-g3 -Wall -Werror -Wextra -std=c++98
NAME=replace
SRCS= main.cpp
OBJS=$(SRCS:.cpp=.o)
RM=rm -f

%.c%.o:
	$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(OBJS):	$(INC)

$(NAME): 	$(INC) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
