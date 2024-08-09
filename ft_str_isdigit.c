#include "libft.h"

t_bool	ft_str_isdigit(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isdigit(*str++))
			return (False);
	return (True);
}
