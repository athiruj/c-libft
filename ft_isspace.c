#include "libft.h"

t_bool	ft_isspace(const char c)
{
	if (c == 9 || (c >= 10 && c <= 13) || c == 32)
		return (True);
	return (False);
}
