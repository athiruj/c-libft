#include "libft.h"

char	*ft_str_tolower(char *str)
{
	char	*tstr;

	tstr = str;
	while (*tstr)
	{
		*tstr = ft_tolower(*tstr);
		tstr++;
	}
	return (str);
}
