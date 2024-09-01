/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:54 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 22:02:37 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t n)
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

static int	ft_is(const char c, const char *set)
{
	int	sta;

	sta = 0;
	while (*set)
		if (c == *set++)
			return (1);
	return (sta);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	size_t	i;

	if (!s1)
		return (ft_strdup(""));
	tmp = (char *)s1;
	while (*s1 && ft_is(*s1, set))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_is(*(s1 + i - 1), set))
		i--;
	tmp = malloc(i + 1);
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, s1, i);
	*(tmp + i) = '\0';
	return (tmp);
}

