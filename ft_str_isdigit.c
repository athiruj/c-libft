/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:27 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:58:29 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_isdigit(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isdigit(*str++))
			return (False);
	return (True);
}
