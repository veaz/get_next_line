# Get Next Line - 42 Barcelona

## Description
Get Next Line is a project focused on creating a function that returns a line read from a file descriptor. This project introduces the concept of static variables in C programming.

## Main Features
- **Function Prototype**: `char *get_next_line(int fd);`
- **Purpose**: The function should return a line read from a given file descriptor.
- **Return Value**:
  - A line that was read.
  - `NULL` if there's nothing else to read or an error occurred.
- **Behavior**:
  - Repeated calls should allow reading a text file line by line.
  - The returned line should include the terminating `\n` character, except if EOF is reached and it doesn't end with a `\n`.
  - The function should work for reading both files and standard input.

## General Instructions
- The project must adhere to the 42 Norm (Norminette).
- No segmentation faults, bus errors, or memory leaks are allowed.
- Compilation flags: `-Wall -Wextra -Werror`.
- The buffer size for `read()` can be defined using `-D BUFFER_SIZE=n`.
- Undefined behavior if the file changes between calls before reaching EOF.
- Reading binary files may result in undefined behavior.

## Bonus
- Use only one static variable in `get_next_line()`.
- The function should manage multiple file descriptors simultaneously.
- Bonus files should have the `_bonus.[c/h]` suffix.

