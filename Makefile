CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_LIB) -I $(INC_DIR)
LDFLAGS = -L $(INC_LIB) -lft  # Link with libft.a in the parent directory

# Name

NAME = libftprintf.a

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes
INC_LIB = ./libft

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
$(NAME): $(OBJ)
	@make -C $(INC_LIB)
	@ar rcs $(NAME) $(SRC_OBJ) $(LDFLAGS)
	@echo "$(GREEN)Library $(NAME) created.$(RESET)"

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled: $<$(RESET)"

# Clean up object files and the executable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Cleaned object files and executable.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Removed binary files.$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus start