#include "get_next_line.h"

int main()
{
    int		fd1;
	int		fd2;
	int		x;
	int		space;

	x = 0;
	space = 20;
	while (space != 0)
	{
		printf("\n\n\n");
		space--;
	}
	//fd = open("./fd.txt", O_RDONLY); //nombre, modo, permisos O_APPEND
	fd1 = open("./fd.txt", O_RDONLY);
	fd2 = open("./lorem.txt", O_RDONLY);

	//printf("fd = %i\n", fd);
	while (x < 3)
	{
		//printf("L%i = %s", (x + 1), get_next_line(fd));
		get_next_line(100);
		x++;
	}
	close(fd1);
	close(fd2);

}