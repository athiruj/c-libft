#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	tmp1;
	unsigned char	tmp2;

	while (*s1 || *s2)
	{
		tmp1 = (unsigned char)*s1++;
		tmp2 = (unsigned char)*s2++;
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
	}
	return (0);
}
