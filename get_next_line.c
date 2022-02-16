#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*test = "test";
	char	*ptr;
	int		buf;
	int		len;

	buf = 10;//# de bytes a copiar
	//printf("get_next_line\n");
	ptr = (char *)malloc((buf + 2) * sizeof(char));
	read(fd, ptr, buf); //Lee y almacena 
	len = ft_strlen(ptr);
	printf("ptr = %s", ptr);
	printf("len = %i\n", len);


    return (test);
}