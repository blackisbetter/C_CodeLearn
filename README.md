# C_CodeLearn

A C language learning project containing study notes, exercises, and small games written during a C programming course.

## Project Structure

```
C_CodeLearn/
├── shared/                          # Shared utility library (reusable code)
│   ├── common.h                     # Common macros (ARRAY_SIZE, etc.)
│   ├── math_utils.h / .c           # is_prime, is_leap_year, fib, is_lily_number, days_in_month
│   ├── string_utils.h / .c         # my_strlen, my_strcpy, reverse_string
│   ├── bit_utils.h / .c            # count_bits_set, count_different_bits
│   ├── array_utils.h / .c          # binary_search, bubble_sort, print_int_array, swap_int
│   └── menu_utils.h / .c           # show_game_menu, run_game_loop
├── C_study_game1/                   # Tic-tac-toe game (canonical implementation)
├── C_study_game2_saolei/            # Minesweeper game
├── C_study_9_5/                     # Tic-tac-toe (uses shared game from C_study_game1)
├── C_study_9_4/                     # Functions, prime numbers, binary search
├── C_study_9_10/                    # Operators study
├── C_study_9_11/                    # Integer promotion & type conversion
├── C_study_9_12/                    # Lily numbers, Fibonacci, array operations
├── C_study_9_13_debug/              # Debugging, strcpy, strlen
├── C_study_9_13_test/               # Bit counting, month days
├── C_study_pointer_9_12/            # Pointers, bit operations, structs
├── C_test_8_31/ ... C_test_9_9/     # Daily exercises and notes
└── test_8_30/                       # Array printing exercise
```

## Shared Utilities

The `shared/` directory contains reusable utility functions extracted from duplicated code across the project:

| Module | Functions | Description |
|--------|-----------|-------------|
| `math_utils` | `is_prime`, `is_leap_year`, `fib`, `is_lily_number`, `days_in_month` | Common math/number theory utilities |
| `string_utils` | `my_strlen`, `my_strcpy`, `reverse_string` | Custom string manipulation functions |
| `bit_utils` | `count_bits_set`, `count_different_bits` | Bit manipulation utilities |
| `array_utils` | `binary_search`, `bubble_sort`, `print_int_array`, `swap_int` | Array operations |
| `menu_utils` | `show_game_menu`, `run_game_loop` | Game menu UI framework |

## Building

Each sub-project can be compiled independently. Example for tic-tac-toe:

```bash
gcc C_study_game1/C_study_game1/test.c \
    C_study_game1/C_study_game1/game.c \
    shared/menu_utils.c \
    -IC_study_game1/C_study_game1 -o tictactoe -lm
```

Example for minesweeper:

```bash
gcc C_study_game2_saolei/C_study_game2_saolei/test.c \
    C_study_game2_saolei/C_study_game2_saolei/game2.c \
    shared/menu_utils.c \
    -IC_study_game2_saolei/C_study_game2_saolei -o minesweeper -lm
```

## Encoding

All source files use UTF-8 encoding.
