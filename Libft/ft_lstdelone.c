/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 01:46:40 by root              #+#    #+#             */
/*   Updated: 2016/06/26 11:13:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (!alst || !del)
		return;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
