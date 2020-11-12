/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:31:35 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/12 17:30:07 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;

	len = 0;
	while (dest[len] && len < n)
		++len;
	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while ((i + len) < (n - 1))
	{
		dest[i + len] = src[i];
		++i;
	}
	if (len < n)
		dest[i + len] = '\0';
	return (ft_strlen(src) + len);
}
