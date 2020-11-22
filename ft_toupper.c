/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:31:44 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/01 15:30:05 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= (int)'a' && c <= (int)'z')
	{
		return (c - (int)'a' + (int)'A');
	}
	return (c);
}