#include "libft.h"

t_bool	ft_isblank(const char c)
{
	if (c == 9 || c == 32)
		return (True);
	return (False);
}
