# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 00:22:30 by cvalim-d          #+#    #+#              #
#    Updated: 2024/11/06 00:31:42 by cvalim-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME = libft.a

# Source files
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
      ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
      ft_split.c ft_strdup.c ft_strchr.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
      ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strncmp.c ft_strtrim.c ft_strrchr.c \
      ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_striteri.c

# Bonus source files
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
            ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Object files
OBJS = $(SRC:%.c=%.o)
BONUS_OBJS = $(BONUS_SRC:%.c=%.o)

# Compiler and flags
CC = cc
CCFLAGS = -Wall -Wextra -Werror

# Default target
all: $(NAME)

# Build the library
$(NAME): $(OBJS)
	ar rcs $@ $^

# Build the library with bonus files
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

# Clean object files
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Clean object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re bonus