#include "libft.h"

t_bool	ft_isalnum(const char c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (True);
	return (False);
}
