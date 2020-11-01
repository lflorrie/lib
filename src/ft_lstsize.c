/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:43:39 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:43:41 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		++i;
		lst = lst->next;
	}
	return (i);
}
