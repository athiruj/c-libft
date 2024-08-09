#include "libft.h"

t_bool	ft_str_isalnum(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isalnum(*str++))
			return (False);
	return (True);
}
