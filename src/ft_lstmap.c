/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:44:30 by lflorrie          #+#    #+#             */
/*   Updated: 2020/10/28 17:44:31 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*result;
	void	*content;
	t_list	*begin_result;

	
	if (lst == NULL)
		return (NULL);
	if ((result = ft_lstnew(lst->content)) == NULL)
		return (NULL);
	begin_result = result;
	while (lst->next && (content = f(lst->content)) == NULL)
	{
		if ((result->next = ft_lstnew(content)) == NULL)
		{
			content = NULL;
			break ;
		}
		result = result->next;
		lst = lst->next;
	}
	if (content == NULL)
		ft_lstclear(&result, del);
	return (begin_result);
}
