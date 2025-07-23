NAME = libft.a
SRCS = $(filter-out ft_lst%.c, $(wildcard *.c))
SRCS_BONUS = $(wildcard ft_lst*.c)
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: all $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	cc -c -Wall -Werror -Wextra -I . $< -o $@

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf libft.a

re: fclean all

.PHONY: all bonus clean fclean re