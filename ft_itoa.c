/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:57:49 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:57:50 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	len;

	len = 1;
	nbr /= 10;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

char	*ft_itoa(int n)
{
	char			re;
	size_t			len;
	char			*result;

	re = 0;
	if (n < 0)
		re++;
	len = ft_nbrlen(n) + re;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (re == 1)
		result[0] = '-';
	while (len - re)
	{
		result[--len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
