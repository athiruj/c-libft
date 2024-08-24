/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:06 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:58:08 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;

	if (!dst && !src)
		return (NULL);
	tdst = (char *)dst;
	tsrc = (char *)src;
	if (tdst > tsrc)
		while (n--)
			*(tdst + n) = *(tsrc + n);
	else
		while (n--)
			*tdst++ = *tsrc++;
	return (dst);
}
