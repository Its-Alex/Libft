/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 13:00:06 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 16:49:14 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memalloc(size_t size)
{
	char	*data;
	size_t	count;

	count = 0;
	if ((data = (char *)malloc(size)) == NULL)
		return (NULL);
	while (count < size)
		data[count++] = 0;
	return ((void*)data);
}
