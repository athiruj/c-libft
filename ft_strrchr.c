/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:50 by athi              #+#    #+#             */
/*   Updated: 2024/08/25 15:20:06 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*tstr;

	c = (unsigned char)c;
	tstr = (char *)str + ft_strlen(str);
	while (*tstr != c && *str++)
		tstr--;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
