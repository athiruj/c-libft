#include "libft.h"

char	ft_toupper(char c)
{
	if (ft_islower(c))
		c = c - 32;
	return (c);
}
