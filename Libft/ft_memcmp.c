/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 22:26:01 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 21:27:32 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char  *str1;
	char  *str2;
	size_t count;

	str1  = (char *)s1;
	str2  = (char *)s2;
	count = 0;
	while (str1[count] == str2[count] && str1[count] != '\0' && str2[count] != '\0' && count < n)
		count++;
	return (str1[count] - str2[count]);
}
