# 42 Istanbul Piscine

A collection of my C and shell exercises from the 42 Istanbul Piscine. The folders follow the original module and exercise numbering.

## Modules

| Module | Focus |
| --- | --- |
| [Shell00](Shell00/) | Shell commands and file-system exercises |
| [C00](C00/) | Character output, loops, and basic functions |
| [C01](C01/) | Pointers, arrays, and in-place updates |
| [C02](C02/) | String copying and character handling |
| [C03](C03/) | String comparison, concatenation, and search |
| [C04](C04/) | String output and numeric conversion |
| [C05](C05/) | Iteration, recursion, and mathematical functions |
| [C06](C06/) | Command-line arguments and program entry points |

## Build an exercise

Each exercise is independent. Exercises that define `main` can be compiled and run on their own. Function-only exercises can be compiled with `cc -c` or linked with a small test driver.

For example, build and run [C06/ex00](C06/ex00/) from the repository root.

```sh
cc -Wall -Wextra -Werror C06/ex00/ft_print_program_name.c -o /tmp/piscine-program-name
/tmp/piscine-program-name
```

This exercise prints the program name it receives as `argv[0]`.

## Related project

[42 Piscine Rush01](https://github.com/ismailkaraer/42-Piscine-Rush01) is a separate team project that solves 4×4 Skyscraper puzzles in C.
