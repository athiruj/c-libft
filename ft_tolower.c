#include "libft.h"

char	ft_tolower(char c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}
