/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isxdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:01:40 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:01:41 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_isxdigit(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isxdigit(*str++))
			return (False);
	return (True);
}
