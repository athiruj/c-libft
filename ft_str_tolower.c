/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:01:43 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:01:44 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_tolower(char *str)
{
	char	*tstr;

	tstr = str;
	while (*tstr)
	{
		*tstr = ft_tolower(*tstr);
		tstr++;
	}
	return (str);
}
