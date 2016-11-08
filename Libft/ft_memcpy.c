/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 19:02:21 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 16:08:05 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest0;
	char	*src0;
	size_t	count;

	dest0 = (char *)dest;
	src0 = (char *)src;
	count = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (count < n)
	{
		dest0[count] = src0[count];
		count++;
	}
	return (dest);
}
