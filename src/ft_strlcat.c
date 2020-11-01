/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:31:35 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/01 15:22:17 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;

	if (dest == NULL || src == NULL)
		return (0);
	len = ft_strlen(dest);
	i = 0;
	if (n != 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i + len] = src[i];
			++i;
		}
		dest[i + len] = '\0';
	}
	return (ft_strlen(src));
}
