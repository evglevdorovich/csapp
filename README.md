# Computer Systems: A Programmer's Perspective

Small C exercises and demonstrations from *Computer Systems: A Programmer's Perspective* (CS:APP). The examples focus on data representations, integer arithmetic, floating-point behavior, and machine-level programming concepts.

## Layout

- `show-bytes.c` demonstrates byte-level representations, endianness, and replacing the low byte of an integer.
- `show_prim.c` contains primitive-value byte-display helpers.
- `inf.c` explores floating-point infinity and arithmetic.
- `integers-representation/` contains integer representation and arithmetic exercises:
  - `arith.c`, `div16.c`, and `strlonger.c` explore integer operations and shifts.
  - `tadd.c` and `tmult_ok.c` test signed addition and multiplication overflow.
  - `uadd.c` and `unsigned_sum_elements.c` explore unsigned arithmetic.
  - `find-val.c` and `sec-vul.c` contain additional representation and security exercises.

## Build and run

Compile an exercise from the repository root with GCC:

```sh
gcc -Wall -Wextra -std=c11 show-bytes.c -o show-bytes
./show-bytes
```

For an exercise in the subdirectory:

```sh
gcc -Wall -Wextra -std=c11 integers-representation/tadd.c -o integers-representation/tadd
./integers-representation/tadd
```

Build outputs are intentionally ignored by Git. Keep the `.c` files as the source of truth.