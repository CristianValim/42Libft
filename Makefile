# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 00:22:30 by cvalim-d          #+#    #+#              #
#    Updated: 2024/12/19 14:06:06 by cvalim-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME	= libft.a

# Source files
SRC	=																			\
	ft_atoi.c			ft_bzero.c			ft_calloc.c		ft_isalnum.c		\
	ft_isalpha.c		ft_isdigit.c		ft_isprint.c	ft_memchr.c			\
	ft_memcmp.c			ft_memcpy.c			ft_memset.c		ft_putchar_fd.c		\
	ft_putendl_fd.c		ft_putnbr_fd.c		ft_split.c		ft_strdup.c			\
	ft_strchr.c			ft_strjoin.c		ft_strlcat.c	ft_strlen.c			\
	ft_strmapi.c		ft_strnstr.c		ft_strncmp.c	ft_strtrim.c		\
	ft_substr.c			ft_tolower.c		ft_toupper.c	ft_itoa.c		 	\
	ft_striteri.c		ft_isascii.c		ft_memmove.c	ft_putstr_fd.c		\
	ft_strlcpy.c		ft_strrchr.c		ft_printf.c

# Bonus source files
BONUS_SRC  =																	\
	ft_lstadd_front.c	ft_lstsize.c		ft_lstlast.c	ft_lstadd_back.c	\
	ft_lstdelone.c		ft_lstclear.c		ft_lstiter.c	ft_lstmap.c			\
	ft_lstnew.c																	\

# Object files
OBJS		= $(SRC:%.c=%.o)
BONUS_OBJS	= $(BONUS_SRC:%.c=%.o)

# Compiler and flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# ANSI color codes for styling
GREEN	:= \033[0;32m
YELLOW	:= \033[0;33m
BLUE	:= \033[0;34m
RED		:= \033[0;31m
RESET	:= \033[0m

# Default target
all: start_message $(NAME) end_message

# Display a start message
start_message:
	@echo "------------------------------------------------------------------------------"
	@echo "$(YELLOW)🚀 Starting the compilation process...$(RESET)"
	@sleep 0.5

# Display an end message
end_message:
	@echo "------------------------------------------------------------------------------"
	@echo "$(GREEN)✅ Compilation completed successfully!$(RESET)"
	@sleep 0.5

# Build the library
$(NAME): $(OBJS)
	@echo "------------------------------------------------------------------------------"
	@echo "$(BLUE)🔨 Building the library...$(RESET)"
	@sleep 0.5
	ar rcs $@ $^

# Build the library with bonus files
bonus: start_message $(BONUS_OBJS) $(OBJS) end_message
	@echo "------------------------------------------------------------------------------"
	@echo "$(YELLOW)🔨 Building the library with bonus files...$(RESET)"
	@sleep 0.5
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Clean object files
clean:
	@echo "------------------------------------------------------------------------------"
	@echo "$(RED)🧹 Cleaning object files...$(RESET)"
	@sleep 0.5
	rm -f $(OBJS) $(BONUS_OBJS)

# Clean object files and the library
fclean: clean
	@echo "------------------------------------------------------------------------------"
	@echo "$(RED)🧹 Cleaning object files and the library...$(RESET)"
	@sleep 0.5
	rm -f $(NAME)

# Rebuild the library
re: fclean all
	@echo "------------------------------------------------------------------------------"
	@echo "$(BLUE)🔄 Rebuilding the library...$(RESET)"
	@sleep 0.5

# Compiles .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

.PHONY: all bonus clean fclean re start_message end_message
