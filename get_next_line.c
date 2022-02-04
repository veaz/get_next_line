#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*test = "test";
	char	*ptr;
	int		buf;
	int		len;

	buf = 10;
	//printf("get_next_line\n");
	ptr = (char *)malloc((buf + 2) * sizeof(char));
	read(fd, ptr, buf);
	len = ft_strlen(ptr);
	printf("len = %i\n", len);
	ptr[buf + 1] = '\n';
	ptr[buf + 1] = '\0';
	len = ft_strlen(ptr);
	printf("len = %i\n", len);
	printf("ptr = %s", ptr);

	ft_morechar(ptr, 'c');



    /*
    char    *test;
    char    *buf;
    buf = NULL;
    read(fd, buf, BUFFER_SIZE); //fd, buffer(puntero a memoria), bytes
    test = "test";
    */
    return (test);
}