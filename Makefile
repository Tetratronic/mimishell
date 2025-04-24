NAME = minishell
SRCS = main.c builtins/pwd.c builtins/cd.c
OBJS = $(SRCS:%.c=%.o)
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a
CC = cc
HEADERS = minishell.h
CFLAGS = -Wall -Wextra -Werror -I. -Ilibft

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(LIBFT) $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -lreadline $(LIBFT) -o $(NAME)

$(LIBFT):
	make bonus -C $(LIBFTDIR)

clean:
	make clean -C $(LIBFTDIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFTDIR)
	rm -rf $(NAME)

re: clean fclean all
