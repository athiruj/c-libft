/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:14 by athi              #+#    #+#             */
/*   Updated: 2024/10/20 00:15:10 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, const char c)
{
	size_t	i;
	int		sta;

	i = 0;
	sta = 0;
	while (*s)
	{
		if (*s != c && !sta)
		{
			i++;
			sta = 1;
		}
		else if (*s == c && sta)
			sta = 0;
		s++;
	}
	return (i);
}

static char	*ft_fword(const char *s, char c)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	len = 0;
	while (*(s + len) && *(s + len) != c)
		len++;
	tmp = (char *)ft_calloc(sizeof(char), len + 1);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < len)
		*(tmp + i++) = *s++;
	return (tmp);
}

static void	*ft_free(char **arr, size_t n)
{
	if (!arr)
		return (NULL);
	while (n--)
		free(*(arr + n));
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tmp_arr;
	size_t	w;
	size_t	i;

	if (!s)
		return (NULL);
	w = ft_wordcount(s, c);
	tmp_arr = (char **)ft_calloc(sizeof(char *), w + 1);
	if (!tmp_arr)
		return (NULL);
	i = 0;
	while (i < w)
	{
		while (*s == c)
			s++;
		*(tmp_arr + i) = ft_fword(s, c);
		if (!(*(tmp_arr + i++)))
			return (ft_free(tmp_arr, ft_wordcount(s, c)));
		while (*s && *s != c)
			s++;
	}
	return (tmp_arr);
}
