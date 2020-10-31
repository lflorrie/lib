/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:32:51 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:32:53 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

void*	ft_calloc(size_t nmemb, size_t size)
{
	char*	res;
	size_t	i;
	
	if (nmemb * size > 2147483647)
		return (NULL);
	if (!(res = (char*)malloc(size * nmemb)))
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		res[i] = 0;
		++i;
	}
	return ((void*)res);
}
