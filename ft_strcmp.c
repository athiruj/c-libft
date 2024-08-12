#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	tmp1;
	unsigned char	tmp2;

	while (*str1 || *str2)
	{
		tmp1 = (unsigned char)*str1++;
		tmp2 = (unsigned char)*str2++;
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
	}
	return (0);
}
