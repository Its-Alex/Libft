/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:09 by malexand          #+#    #+#             */
/*   Updated: 2016/11/04 16:25:38 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*charac;

	charac = (unsigned char *)str;
	if (*str == '\0')
		return (NULL);
	while ((unsigned char)*str)
	{
		if ((unsigned char)c == '\0' && *(str + 1) == '\0')
		{
			str++;
			charac = (unsigned char *)str;
			while ((unsigned char)(*str) == '\0')
			{
				charac = (unsigned char *)str;
				str++;
			}
		}
		if ((unsigned char)*str == (unsigned char)c)
			charac = (unsigned char *)str;
		str++;
	}
	return (char *)(charac);
}
