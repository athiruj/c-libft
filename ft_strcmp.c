#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	t1;
	unsigned char	t2;

	while (*s1 || *s2)
	{
		t1 = (unsigned char)*s1++;
		t2 = (unsigned char)*s2++;
		if (t1 != t2)
			return (t1 - t2);
	}
	return (0);
}
