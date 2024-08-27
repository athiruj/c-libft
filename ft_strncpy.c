/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:40 by athi              #+#    #+#             */
/*   Updated: 2024/08/27 10:10:55 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!src && !n)
		return (dst);
	i = 0;
	while (*src && i < n)
		*(dst + i++) = *src++;
	while (i < n)
		*(dst + i++) = '\0';
	return (dst);
}
