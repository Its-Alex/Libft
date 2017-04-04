/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 20:13:59 by alex              #+#    #+#             */
/*   Updated: 2017/02/16 17:34:27 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	count = 0;
	if (!s || len > ft_strlen(s) || start > ft_strlen(s))
		return (NULL);
	if ((str = (char*)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	while (start + count < start + len)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
