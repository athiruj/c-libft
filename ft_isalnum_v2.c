#include "libft.h"

t_bool	ft_isalnum(const char c)
{
	if (!ft_digit(c) && !ft_isalpha(c))
		return (False);
	return (True);
}
