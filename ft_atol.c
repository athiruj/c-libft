/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:55:27 by athi              #+#    #+#             */
/*   Updated: 2024/10/20 00:23:12 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	short	m;
	long	tmp;

	tmp = 0;
	m = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			m *= -1;
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
		tmp = tmp * 10 + (*str++ - '0');
	return (tmp * m);
}
