# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmorinea <qmorinea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 11:58:09 by qmorinea          #+#    #+#              #
#    Updated: 2024/10/18 20:49:55 by qmorinea         ###   ########.fr        #
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
SRC = $(SRC_DIR)/ft_printf.c\
		$(SRC_DIR)/ft_printf_utils.c\
		$(SRC_DIR)/print_from_flags.c\
		$(SRC_DIR)/put_nbr_base.c
INC = $(INC_DIR)/ft_printf.h

SRC_OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

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
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled: $<$(RESET)"

# Clean up object files and the executable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Cleaned object files.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removed binary files.$(RESET)"

debug:
	@echo $(SRC_OBJ)

re: fclean all

.PHONY: all clean fclean re