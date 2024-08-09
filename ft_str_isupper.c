#include "libft.h"

t_bool	ft_str_isupper(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isupper(*str++))
			return (False);
	return (True);
}
