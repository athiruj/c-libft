#include "libft.h"

t_bool	ft_isprint(const char c)
{
	if (c >= 32 && c <= 126)
		return (True);
	return (False);
}
