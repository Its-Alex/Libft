/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 18:20:21 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 21:29:24 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t count;
	char  *dest;

	dest  = (char*)s;
	count = 0;
	if (!s)
		return (NULL);
	while (count <= n)
	{
		dest[count] = (unsigned char)c;
		count++;
	}
	return (s);
}
