/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:01:46 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:01:47 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_toupper(char *str)
{
	char	*tstr;

	tstr = str;
	while (*tstr)
	{
		*tstr = ft_toupper(*tstr);
		tstr++;
	}
	return (str);
}
