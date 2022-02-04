#include "get_next_line.h"

int main()
{
	char	*test;
    int		fd;


	//fd = open("./fd.txt", O_RDONLY); //nombre, modo, permisos O_APPEND
	fd = open("./fd.txt", O_RDONLY);
	
	printf("fd = %i\n", fd);
	test = get_next_line(fd);

	printf("test = %s\n", test);
}