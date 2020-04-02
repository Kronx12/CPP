CC=clang++
CFLAGS=-Wall -Wextra -Werror -I ./includes/
MLX_FLAGS=-framework OpenGL -framework AppKit -g
NAME=replace
SRCS= main.cpp
OBJS=$(SRCS:.cpp=.o)
RM=rm -f

%.c%.o:
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(OBJS):	$(INC)

$(NAME): 	$(INC) $(OBJS)
	$(CC) $(CFLAGS) $(MLX) $(LIBFT) $(OBJS) $(MLX_FLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all bonus clean fclean re lib
