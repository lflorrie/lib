/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:30:02 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:30:04 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void*	ft_memchr(const void *src, int c, size_t n)
{
	unsigned char*	s;
	size_t			i;

	i = 0;
	s = (unsigned char*)src;
	while(s[i] != '\0' || i < n)
	{
		if (s[i] == (unsigned char) c)
			return s + i;
		++i;
	}
	return NULL;
}
