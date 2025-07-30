# **************************************************************************** #
#                               MAKEFILE CONFIG                                #
# **************************************************************************** #

NAME        = push_swap

# Compiler and flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iincludes

# Source folders
SRC_DIR     = src
PARSE_DIR   = $(SRC_DIR)/parser
SORT_DIR    = $(SRC_DIR)/sorting
UTILS_DIR   = $(SRC_DIR)/utils
OPS_DIR     = $(SRC_DIR)/operations

# Source files
SRC_FILES = \
	$(SRC_DIR)/main.c \
	$(PARSE_DIR)/parser.c \
	$(PARSE_DIR)/add_node_to_stack.c \
	$(PARSE_DIR)/check_duplicates.c \
	$(PARSE_DIR)/check_min_max.c \
	$(PARSE_DIR)/fill_stack.c \
	$(PARSE_DIR)/is_stack_sorted.c \
	$(PARSE_DIR)/is_token_valid.c \
	$(PARSE_DIR)/is_valid_number.c \
	$(PARSE_DIR)/count_tokens.c \
	$(SORT_DIR)/calculate_max_bytes.c \
	$(SORT_DIR)/radix_sort.c \
	$(SORT_DIR)/small_sort.c \
	$(SORT_DIR)/sort_index.c \
	$(UTILS_DIR)/free_stack.c \
	$(UTILS_DIR)/ft_atol.c \
	$(UTILS_DIR)/ft_error.c \
	$(UTILS_DIR)/ft_split.c \
	$(OPS_DIR)/push.c \
	$(OPS_DIR)/reverse_rotate.c \
	$(OPS_DIR)/rotate.c \
	$(OPS_DIR)/swap.c

# Object files (same as .c, but with .o extension)
OBJ_FILES   = $(SRC_FILES:.c=.o)

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

# Default target
all: $(NAME)

# Linking object files into the binary
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

# Rule to compile .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ_FILES)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets (non-file)
.PHONY: all clean fclean re