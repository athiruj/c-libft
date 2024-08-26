/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:05 by athi              #+#    #+#             */
/*   Updated: 2024/08/26 19:08:46 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*tdst;

	// if (!src)
	// 	return (dst);
	tdst = dst;
	while (*src)
		*tdst++ = *src++;
	*tdst = '\0';
	return (dst);
}
