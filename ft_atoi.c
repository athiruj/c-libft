#include "libft.h"

int	ft_atoi(char *str)
{
	short	reminder;
	int		result;

	result = 0;
	reminder = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			reminder *= -1;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * reminder);
}
