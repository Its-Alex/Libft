/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:59:20 by malexand          #+#    #+#             */
/*   Updated: 2016/11/07 17:12:22 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;
	t_list	*tmp;

	tmp = ft_lstnew(lst->content, lst->content_size);
	lst_new = tmp;
	while (lst)
	{
		tmp = f(tmp);
		lst = lst->next;
		tmp->next = ft_lstnew(lst->content, lst->content_size);
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (lst_new);
}
