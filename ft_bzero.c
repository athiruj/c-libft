#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ts;

	ts = (char *)s;
	while (n--)
		*ts++ = 0;
}
