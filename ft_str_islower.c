/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_islower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:31 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:00:42 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_islower(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_islower(*str++))
			return (False);
	return (True);
}
