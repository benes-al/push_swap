```plaintext
                                     88                                                                             
                                     88                                                                             
                                     88                                                                             
8b,dPPYba,   88       88  ,adPPYba,  88,dPPYba,             ,adPPYba,  8b      db      d8  ,adPPYYba,  8b,dPPYba,   
88P'    "8a  88       88  I8[    ""  88P'    "8a            I8[    ""  `8b    d88b    d8'  ""     `Y8  88P'    "8a  
88       d8  88       88   `"Y8ba,   88       88             `"Y8ba,    `8b  d8'`8b  d8'   ,adPPPPP88  88       d8  
88b,   ,a8"  "8a,   ,a88  aa    ]8I  88       88            aa    ]8I    `8bd8'  `8bd8'    88,    ,88  88b,   ,a8"  
88`YbbdP"'    `"YbbdP'Y8  `"YbbdP"'  88       88            `"YbbdP"'      YP      YP      `"8bbdP"Y8  88`YbbdP"'   
88                                                                                                     88           
88                                              888888888888                                           88           



This project sorts data in a stack using a limited set of instructions, aiming to achieve the lowest possible number of actions. The goal is to work with various algorithms and select the most appropriate one for optimized data sorting.

📂 Project Structure

```plaintext
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

🧠 Overview

The program reads a series of integers (either as multiple arguments or as a single space-separated string), validates them, builds a linked-list stack (stack_a), and sorts the stack(s) using a radix sort adapted for stack operations. Memory safety and error handling are prioritized, handling invalid tokens, duplicates, and allocation failures.

📈 Algorithm & Complexity
Radix Sort Using Stacks

    Each integer is assigned an index based on its sorted position.

    The algorithm processes each bit from least-significant to most-significant, repeatedly moving elements between two stacks (a and b) and then back into a.

    Each bit pass takes O(n), and with k bits needed, the total time complexity is O(n · k).

    Since k ≈ log₂(n), overall complexity is O(n · log n).

    Memory usage is O(n) due to the linked-list node allocations.

Small List Optimization

    For n ≤ 5, the algorithm uses a specialized routine that sorts the list with fewer operations (e.g., at most two operations for three elements).

    This avoids full radix-passes for small lists and improves efficiency.

🛠️ Compilation & Usage
Build

make

Generates the executable push_swap.
Usage

./push_swap 3 2 1 5
# or
./push_swap "3 2 1 5"

The program outputs the sequence of operations required to sort the stack.
Supported Operations

    sa, sb, ss – swap

    pa, pb – push

    ra, rb, rr – rotate

    rra, rrb, rrr – reverse-rotate

⚙️ Validation & Safety

    Input validation: checks each token for valid integer format and range.

    Duplicate detection: identifies duplicate values after stack creation and exits cleanly if found.

    Memory handling: on any error (e.g., malloc failure), all allocated nodes are freed using free_stack() before exiting.

📁 Module Walkthrough

    parser/: parsing logic, string splitting, token validation, and stack initialization.

    operations/: implement core stack operations (push, swap, rotate, and reverse-rotate).

    sorting/: main radix sort logic, small-list sorting routines, and index assignment.

    utils/: auxiliary functions including ft_atol, ft_split, error handler (ft_error), and memory cleanup routines.

✅ Example Run

Initial state:

stack_a: [4, 3, 2, 1]

Sequence of operations:

pb
pb
sa
pb
pb
pa
pa
ra
pa
pa

Final state:

stack_a: [1, 2, 3, 4]
