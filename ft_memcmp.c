#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	while (n--)
	{
		tmp1 = (unsigned char *)str1++;
		tmp2 = (unsigned char *)str2++;
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
	}
	return (0);
}
