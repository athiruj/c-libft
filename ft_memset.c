#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*tstr;

	tstr = (unsigned char *)str;
	while (n--)
		*tstr++ = c;
	return (str);
}
