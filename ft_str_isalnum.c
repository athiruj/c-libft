/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:19 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:58:21 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_isalnum(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isalnum(*str++))
			return (False);
	return (True);
}
