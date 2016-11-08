/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 10:22:55 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 15:01:06 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	count = 0;
	str = (unsigned char *)s;
	while (count < n)
	{
		if (str[count] == (unsigned char)c)
			return (void *)(&str[count]);
		count++;
	}
	return (NULL);
}
