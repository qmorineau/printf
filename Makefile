# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 11:58:09 by qmorinea          #+#    #+#              #
#    Updated: 2024/10/17 13:08:15 by qmorinea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INC_DIR)

# Name

NAME = libftprintf.a

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes

# Source and Object files
SRC = $(wildcard $(SRC_DIR)/*.c)
SRC_OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJ = $(BONUS_SRC:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Main target
all: $(NAME)

# Linking object files
$(NAME): $(SRC_OBJ)
	@ar rcs $(NAME) $(SRC_OBJ)
	@echo "$(GREEN)Library $(NAME) created.$(RESET)"

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)printf: Compiled: $<$(RESET)"

# Clean up object files and the executable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)printf: Cleaned object files.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)printf: Removed binary files.$(RESET)"

re: fclean all

norm:
	@norminette

test: all
	@$(CC) $(CFLAGS) ./main.c $(SRC_OBJ) -g3
	@./a.out

.PHONY: all clean fclean re bonus norm test

# -L ./ -l ftprintf compile test