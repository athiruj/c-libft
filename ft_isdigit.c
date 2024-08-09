#include "libft.h"

t_bool	ft_isdigit(const char c)
{
	if (c >= 48 && c <= 58)
		return (True);
	return (False);
}
