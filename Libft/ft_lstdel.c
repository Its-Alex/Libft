/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 10:43:03 by root              #+#    #+#             */
/*   Updated: 2016/06/26 10:46:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (!alst || !del)
		return;
	list = *alst;
	while (list)
	{
		del((*alst)->content, (*alst)->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}
