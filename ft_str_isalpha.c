/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:58:24 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:58:25 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_isalpha(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isalpha(*str++))
			return (False);
	return (True);
}
