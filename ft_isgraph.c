#include "libft.h"

t_bool	ft_isgraph(const char c)
{
	if (c >= 33 && c <= 126)
		return (True);
	return (False);
}
