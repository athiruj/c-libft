#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*tdst;

	if (!src)
		return (dst);
	tdst = dst;
	while (*src)
		*tdst++ = *src++;
	*tdst = '\0';
	return (dst);
}
