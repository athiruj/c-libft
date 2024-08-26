/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:01:53 by athi              #+#    #+#             */
/*   Updated: 2024/08/25 15:57:39 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*tstr;

	c = (unsigned char)c;
	tstr = (char *)str;
	while (*tstr != c && *tstr)
		tstr++;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
