#include "libft.h"

t_bool	ft_iscntrl(const char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (False);
	return (True);
}
