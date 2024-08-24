/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:02 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:58:04 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	if (!dst && !src)
		return (dst);
	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	while (n--)
		*tdst++ = *tsrc++;
	return (dst);
}
