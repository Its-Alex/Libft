/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 10:22:55 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 21:27:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	char  *str;
	size_t count;

	count = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	while (count < n)
		if (str[count] == c++)
			return ((void *)(&str[count]));
	return (NULL);
}
