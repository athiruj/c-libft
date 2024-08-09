#include "libft.h"

t_bool	ft_isalnum(const char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (True);
	return (False);
}
