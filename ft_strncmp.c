#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	unsigned char	tmp1;
	unsigned char	tmp2;

	while ((*str1 || *str2) && n--)
	{
		tmp1 = (unsigned char)*str1++;
		tmp2 = (unsigned char)*str2++;
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
	}
	return (0);
}
