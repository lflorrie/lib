/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:29:31 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/01 15:21:46 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL || src == NULL || n == 0)
		return (NULL);
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	if (src > dest)
	{
		i = 0;
		while (i != (int)n)
		{
			d[i] = s[i];
			++i;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			--i;
		}
	}
	return (dest);
}
