/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:28:21 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:28:54 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strncmp(char *lhs, char *rhs, size_t n)
{
	size_t i;

	i = 0;
	while ((lhs[i] || rhs[i]) && i < n)
	{
		if (lhs[i] != rhs[i])
		{
			return (lhs[i] - rhs[i]);
		}
		++i;
	}
	return (0);
}
