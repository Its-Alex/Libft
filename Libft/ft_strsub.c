/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 20:13:59 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 13:32:22 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*str;

	count = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start + len || !s)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
