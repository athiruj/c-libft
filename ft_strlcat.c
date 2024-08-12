#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	lsrc;
	size_t	ldst;

	lsrc = ft_strlen(src);
	ldst = ft_strnlen(dst, n);
	if (ldst == n)
		return (n + lsrc);
	if (lsrc < n - ldst)
		ft_memcpy(dst + ldst, src, lsrc + 1);
	else
	{
		ft_memcpy(dst + ldst, src, n - ldst - 1);
		*(dst + --n) = '\0';
	}
	return (ldst + lsrc);
}
