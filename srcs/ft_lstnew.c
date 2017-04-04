/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/25 17:01:45 by root              #+#    #+#             */
/*   Updated: 2017/02/16 17:34:22 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*list;
	void	*new_content;

	if (!(new_content = ft_memalloc(content_size)))
		return (NULL);
	if (!content)
	{
		new_content = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(new_content, content, content_size);
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	list->content = new_content;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
