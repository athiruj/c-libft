/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:23:41 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 16:28:46 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)){
	char	*tmp;
	size_t	i;

	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		*(tmp + i) = (*f)(i, *(s + i));
		i++;
	}
	*tmp = '\0';
	return (tmp);
}
