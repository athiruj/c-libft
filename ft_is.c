#include "libft.h"

t_bool	ft_is(const char c, const char *set)
{
	t_bool	state;

	state = False;
	while (*set)
		if (c == *set++)
			return (True);
	return (state);
}
