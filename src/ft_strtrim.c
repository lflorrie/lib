/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:39:31 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/01 15:29:20 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	if (end == 0 || set == NULL || s1 == NULL)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]))
	{
		++start;
	}
	while (ft_strchr(set, s1[end - 1]))
	{
		--end;
	}
	return (ft_substr(s1, start, end - start));
}
