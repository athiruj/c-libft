#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*tstr;

	c = (unsigned char)c;
	tstr = (char *)str;
	while (*str++)
		if (*tstr == c)
			tstr = (char *)str;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
