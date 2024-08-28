/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:17 by athi              #+#    #+#             */
/*   Updated: 2024/08/26 09:32:39 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	lsrc;
	size_t	ldst;

	lsrc = ft_strlen(src);
	ldst = ft_strnlen(dst, n);
	if (ldst == n)
		return (n + lsrc);
	if (lsrc < n - ldst)
		ft_memcpy(dst + ldst, src, lsrc + 1);
	else
	{
		ft_memcpy(dst + ldst, src, n - ldst - 1);
		*(dst + n - 1) = '\0';
	}
	return (ldst + lsrc);
}
