#include "libft.h"

t_bool	ft_str_islower(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_islower(*str++))
			return (False);
	return (True);
}
