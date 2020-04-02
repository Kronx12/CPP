NAME=Annuaire
CC=clang++
FLAGS=-Wall -Wextra -Werror
SRCS=main.cpp Contact.cpp
OBJS=$(SRCS:.c=.o)
INC=Contact.hpp
RM=rm -f

%.c%.o:
	$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(OBJS):	$(INC)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o
	
fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY: all re fclean clean