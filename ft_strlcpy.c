/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:21 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:02:22 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	size_t	lsrc;

	lsrc = ft_strlen(src);
	if (lsrc + 1 < n)
		ft_memcpy(dst, src, lsrc + 1);
	else if (!n)
	{
		ft_memcpy(dst, src, n - 1);
		*(dst + --n) = 0;
	}
	return (lsrc);
}
