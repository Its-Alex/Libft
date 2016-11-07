/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 10:43:03 by root              #+#    #+#             */
/*   Updated: 2016/11/04 10:42:40 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (!alst || !del)
		return ;
	list = *alst;
	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}
