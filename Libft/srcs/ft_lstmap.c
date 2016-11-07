/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:59:20 by malexand          #+#    #+#             */
/*   Updated: 2016/11/07 17:26:34 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;
	t_list	*tmp;

	tmp = ft_lstnew(lst->content, lst->content_size);
	lst_new = tmp;
	while (lst)
	{
		tmp = f(tmp);
		tmp->next = ft_lstnew(lst->content, lst->content_size);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (lst_new);
}
