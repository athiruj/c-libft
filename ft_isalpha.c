#include "libft.h"

t_bool	ft_isalpha(const char c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (True);
	return (False);
}
