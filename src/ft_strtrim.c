/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:39:31 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/13 15:02:28 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;

	if (set == NULL || s1 == NULL)
		return (NULL);
	end = ft_strlen(s1);
	if (end == 0 || ft_strlen(set) == 0)
		return ((char*)ft_calloc(1, sizeof(char)));
	start = 0;
	while (ft_strchr(set, s1[start]))
	{
		++start;
	}
	while (ft_strchr(set, s1[end - 1]))
	{
		--end;
	}
	if (end - start < 0)
	{
		return ((char*)ft_calloc(1, sizeof(char)));
	}
	return (ft_substr(s1, start, end - start));
}
