#include "libft.h"

char	*ft_strchr(const char *str, char c)
{
	char	*tstr;

	c = (unsigned char)c;
	tstr = (char *)str;
	while (*tstr != c && *tstr)
		tstr++;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
