#include "libft.h"

t_bool	ft_str_isxdigit(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isxdigit(*str++))
			return (False);
	return (True);
}
