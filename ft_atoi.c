#include "libft.h"

int	ft_atoi(char *str)
{
	short	m;
	int		tmp;

	tmp = 0;
	m = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			m *= -1;
	while (*str >= '0' && *str <= '9')
		tmp = tmp * 10 + (*str++ - '0');
	return (tmp * m);
}
