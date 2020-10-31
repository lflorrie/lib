/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:33:07 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:33:09 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char*	ft_strdup(const char *str)
{
	int		length;
	char*	res;

	length = 0;
	if (str == NULL)
		return (NULL);
	while (str[length])
	{
		++length;
	}
	if (!(res = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	res[length] = '\0';
	while (length > 0)
	{
		--length;
		res[length] = str[length];
	}
	return (res);
}
