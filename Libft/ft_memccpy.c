/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 20:39:21 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 21:26:45 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
	char  *dest0;
	char  *src0;
	size_t count;

	dest0 = (char *)dest;
	src0  = (char *)src;
	count = 0;
	if (n == 0 || dest == src || !src)
		return (dest);
	while (count < n)
	{
		if (dest0[count] == c)
			return (void *)(&dest0[count]);
		dest0[count] = src0[count];
		count++;
	}
	return (NULL);
}
