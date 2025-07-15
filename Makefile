NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#$(OBJS): %.c
%.o: %.c
	cc -c -Wall -Werror -Wextra -I . $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf libft.a

re: fclean all