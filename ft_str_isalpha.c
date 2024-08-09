#include "libft.h"

t_bool	ft_str_isalpha(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isalpha(*str++))
			return (False);
	return (True);
}
