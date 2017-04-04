/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:32:41 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:33:42 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, const char *s2)
{
	size_t	count;
	size_t	len[2];
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(s2);
	str = ft_strnew(len[0] + len[1]);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count < len[0])
	{
		str[count] = s1[count];
		count++;
	}
	while (count < (len[0] + len[1]))
	{
		str[count] = s2[count - len[0]];
		count++;
	}
	str[count] = '\0';
	free(s1);
	return (str);
}
