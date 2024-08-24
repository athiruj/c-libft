#include "libft.h"

t_bool	ft_is(const char c, const char *set)
{
	t_bool	sta;

	sta = False;
	while (*set)
		if (c == *set++)
			return (True);
	return (sta);
}
