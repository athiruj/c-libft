#include "libft.h"
#include <stdio.h>

static char	fts_toupper(unsigned int i, char c)
{
	if (ft_islower(c))
		c -= 32;
	printf("%d %c\n", i, c);
	return (c);
}

int main ()
{
	char str[100] = "abcdefghijklmnopqrstuvwxyz";
	// char (*f)(unsigned int, char) = &ft_toupper;
	char *tmp = ft_strmapi(str, &fts_toupper);
	printf("%s\n", tmp);
}
