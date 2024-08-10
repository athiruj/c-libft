#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*tstr;

    if (!n)
        return (NULL);
    c = (unsigned char)c;
	tstr = (char *)str;
	while (*tstr != c && *tstr && --n)
		tstr++;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
