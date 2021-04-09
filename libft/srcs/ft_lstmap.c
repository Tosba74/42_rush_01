/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:37:56 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/06 14:55:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!(new))
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	begin = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew(f(lst->content));
		if (!(new->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new->next;
	}
	return (begin);
}
