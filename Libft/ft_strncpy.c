/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 23:55:38 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 11:12:02 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	count;

	count = 0;
	while (src[count] && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count != n)
		dest[count++] = '\0';
	return (dest);
}
