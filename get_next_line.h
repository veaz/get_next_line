#ifndef LIBFT_H
# define LIBFT_H

#include "fcntl.h"
#include "unistd.h"
#include "stdio.h" //printf
#include <stdlib.h> //malloc

#define BUFF_SIZE 10

char    *get_next_line(int fd);

int     ft_strlen(const char *s);

char    *ft_morechar(char *s, char c)

#endif