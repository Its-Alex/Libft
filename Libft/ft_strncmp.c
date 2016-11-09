/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 17:33:25 by root              #+#    #+#             */
/*   Updated: 2016/11/09 13:19:42 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	count;

	count = 0;
	if (num == 0)
		return (0);
	while ((unsigned char)s1[count] == (unsigned char)s2[count] &&
			(unsigned char)s1[count] != '\0' &&
			(unsigned char)s2[count] != '\0' && num > count)
		count++;
	if (((unsigned char)s1[count] == '\0' || (unsigned char)s2[count] == '\0')
			&& count == num)
		return (0);
	if ((unsigned char)s1[count - 1] == (unsigned char)s2[count - 1] &&
			count == num)
		return (0);
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
