/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 04:22:20 by atkaewse          #+#    #+#             */
/*   Updated: 2024/10/20 05:37:32 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free(lst->content);
		free(lst);
		lst = tmp;
	}
}
