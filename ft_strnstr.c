/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:46 by athi              #+#    #+#             */
/*   Updated: 2024/08/25 19:06:02 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	if (!n)
		return (0);
	i = ft_strlen(needle);
	while (n >= i
		&& *haystack
		&& ft_strncmp((char *)haystack, (char *)needle, i))
	{
		haystack++;
		n--;
	}
	if (!*haystack || n < i)
		return (NULL);
	return ((char *)haystack);
}
