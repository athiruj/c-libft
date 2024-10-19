/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isiover.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:38:22 by atkaewse          #+#    #+#             */
/*   Updated: 2024/10/19 23:46:30 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isiover(const char *str)
{
	if (ft_atol(str) > INT_MAX && ft_atol(str) < INT_MIN)
		return (True);
	return (False);
}
