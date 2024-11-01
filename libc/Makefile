NAME = libft
SRC = $(wildcard libc/*.c)
OBJS := $(SRC:%.c=%.o)
CC = cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re