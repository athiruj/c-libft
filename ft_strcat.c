#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	i;

	i = ft_strlen(dst);
	while (*src)
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (dst);
}
