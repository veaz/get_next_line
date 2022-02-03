#include "get_next_line.h"

int main()
{

    int fd;

    fd = open("./fd.txt", O_RDONLY);
    prtinf("f= %s \n", get_next_line(fd));


}