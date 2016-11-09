/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 20:39:21 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 14:46:48 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest0;
	char	*src0;
	size_t	count;

	dest0 = (char *)dest;
	src0 = (char *)src;
	count = 0;
	while (count < n)
	{
		dest0[count] = src0[count];
		if (src0[count] == c)
			return (void *)(&dest[count + 1]);
		count++;
	}
	return (NULL);
}
