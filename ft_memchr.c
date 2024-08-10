#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*tstr;

	if (!n)
		return (NULL);
	tstr = (unsigned char *)str;
	while (*tstr != c && --n)
		tstr++;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
