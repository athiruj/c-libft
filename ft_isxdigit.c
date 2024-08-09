#include "libft.h"

t_bool	ft_isxdigit(const char c)
{
	if (ft_isdigit(c)
		|| (c >= 65 && c <= 70)
		|| (c >= 97 && c <= 102))
		return (True);
	return (False);
}
