/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:39:43 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/01 15:37:40 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	**ft_split(const char *s, char c)
{
	int		len;
	int		start;
	int		i;
	int		j;
	char	**res;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			++len;
		i++;
	}
	len++;
	if (!(res = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	start = 0;
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[start + i] != c && s[start + i] != '\0')
		{
			++i;
		}
		res[j] = ft_substr(s, start, i);
		start += i + 1;
		++j;
	}
	res[len] = NULL;
	return (res);
}
