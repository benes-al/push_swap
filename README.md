Operations
----------

I have a check for edge cases in every operation before print the operation name


## Project Structure

push_swap/
├── includes/
│   └── push_swap.h
├── src/
│   ├── operations/
│   │   ├── push.c
│   │   ├── reverse_rotate.c
│   │   ├── rotate.c
│   │   └── swap.c            
│   ├── parser/
│   │   ├── add_node_to_stack.c
│   │   ├── check_duplicates.c
│   │   ├── check_min_max.c
│   │   ├── fill_stack.c
│   │   ├── is_stack_sorted.c
│   │   ├── is_token_valid.c
│   │   ├── is_valid_number.c
│   │   └── parser.c
│   ├── sorting/
│   │   ├── calculate_max_bytes.c
│   │   ├── radix_sort.c
│   │   ├── small_sort.c
│   │   └── sort_index.c
│   ├── utils/
│   │   ├── free_stack.c
│   │   ├── ft_atol.c
│   │   ├── ft_error.c
│   │   └── ft_split.c
│   └── main.c
├── .gitignore
├── Makefile
└── README.md