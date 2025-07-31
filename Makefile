# **************************************************************************** #
#                               MAKEFILE CONFIG                                #
# **************************************************************************** #

NAME        = push_swap

# Compiler and flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iincludes -g

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
	$(PARSE_DIR)/is_token_valid.c \
	$(PARSE_DIR)/is_valid_number.c \
	$(PARSE_DIR)/count_tokens.c \
	$(PARSE_DIR)/is_single_argc_valid.c \
	$(PARSE_DIR)/is_multiple_argc_valid.c \
	$(SORT_DIR)/calculate_max_bites.c \
	$(SORT_DIR)/is_stack_sorted.c \
	$(SORT_DIR)/radix_sort.c \
	$(SORT_DIR)/small_sort.c \
	$(SORT_DIR)/sort_index.c \
	$(SORT_DIR)/sort_tokens.c \
	$(UTILS_DIR)/free_stack.c \
	$(UTILS_DIR)/free_tokens.c \
	$(UTILS_DIR)/ft_atol.c \
	$(UTILS_DIR)/ft_error.c \
	$(UTILS_DIR)/ft_split.c \
	$(OPS_DIR)/push.c \
	$(OPS_DIR)/reverse_rotate.c \
	$(OPS_DIR)/rotate.c \
	$(OPS_DIR)/swap.c

# Object files
OBJ_FILES   = $(SRC_FILES:.c=.o)

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re