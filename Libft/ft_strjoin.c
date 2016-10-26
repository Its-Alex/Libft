/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 21:05:39 by alex              #+#    #+#             */
/*   Updated: 2016/06/26 18:08:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char    *ft_strjoin(const char *s1, const char *s2)
{
	size_t count;
	char  *str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count < ft_strlen(s1))
	{
		str[count] = s1[count];
		count++;
	}
	while (count < (ft_strlen(s1) + ft_strlen(s2)))
	{
		str[count] = s2[count - ft_strlen(s1)];
		count++;
	}
	str[count] = '\0';
	return (str);
}
