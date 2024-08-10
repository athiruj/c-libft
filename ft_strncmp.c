#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned char	t1;
	unsigned char	t2;

	while ((*s1 || *s2) && n--)
	{
		t1 = (unsigned char)*s1++;
		t2 = (unsigned char)*s2++;
		if (t1 != t2)
			return (t1 - t2);
	}
	return (0);
}
