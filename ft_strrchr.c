/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:50 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:02:51 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*tstr;

	c = (unsigned char)c;
	tstr = (char *)str;
	while (*str++)
		if (*tstr == c)
			tstr = (char *)str;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
