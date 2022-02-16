/* Aqui iran las funciones que se utilizaran*/

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

char	*ft_morechar(char *s, char c)
{
    int x;

    x = ft_strlen(s);
    s[x] = c;
    s[x + 1] = '\0';
    printf("s ++ = %s\n", s);
    return (s);
}