/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:01:36 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 14:01:37 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_isupper(const char *str)
{
	if (!str)
		return (False);
	while (*str)
		if (!ft_isupper(*str++))
			return (False);
	return (True);
}
