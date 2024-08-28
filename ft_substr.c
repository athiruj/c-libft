/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:57 by athi              #+#    #+#             */
/*   Updated: 2024/08/25 15:28:19 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len = ft_strnlen(s + start, len);
	tmp = (char *)malloc(len + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (len--)
		*(tmp + i++) = *(s + start++);
	*(tmp + i) = '\0';
	return (tmp);
}
