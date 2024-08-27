/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:37 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 16:05:14 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	tmp1;
	unsigned char	tmp2;

	while ((*s1 || *s2) && n--)
	{
		tmp1 = (unsigned char)*s1++;
		tmp2 = (unsigned char)*s2++;
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
	}
	return (0);
}
