#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;

	if (!dst && !src)
		return (NULL);
	tdst = (char *)dst;
	tsrc = (char *)src;
	if (tdst > tsrc)
		while (n--)
			*(tdst + n) = *(tsrc + n);
	else
		while (n--)
			*tdst++ = *tsrc++;
	return (dst);
}
