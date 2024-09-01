/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:14 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 22:01:45 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*tdst;

	tdst = dst;
	while (*src)
		*tdst++ = *src++;
	*tdst = '\0';
	return (dst);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	tmp = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tmp)
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcpy(tmp + ft_strlen(s1), s2);
	return (tmp);
}
