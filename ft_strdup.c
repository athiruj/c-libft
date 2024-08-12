#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = (char *) malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
