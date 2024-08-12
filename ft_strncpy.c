#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!src || !n)
		return (dst);
	i = 0;
	while (*src && i < n)
		*(dst + i++) = *src++;
	while (i < n)
		*(dst + i++) = '\0';
	return (dst);
}
