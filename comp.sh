#gcc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
gcc main_getnextline.c get_next_line.c get_next_line_utils.c get_next_line.h  && ./a.out