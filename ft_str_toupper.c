#include "libft.h"

char	*ft_str_toupper(char *str)
{
	char	*tstr;

	tstr = str;
	while (*tstr)
	{
		*tstr = ft_toupper(*tstr);
		tstr++;
	}
	return (str);
}
