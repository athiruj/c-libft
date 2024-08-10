#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*tstr;

	tstr = (char *)str;
	while (*str++)
		if (*str == c)
			tstr = (char *)str;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
