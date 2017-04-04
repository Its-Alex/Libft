/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 10:22:55 by alex              #+#    #+#             */
/*   Updated: 2017/02/16 17:34:24 by malexand         ###   ########.fr       */
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
