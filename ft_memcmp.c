#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	while (n--)
	{
		tmp1 = (unsigned char *)s1++;
		tmp2 = (unsigned char *)s2++;
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
	}
	return (0);
}
