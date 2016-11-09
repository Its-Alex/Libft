/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:09 by malexand          #+#    #+#             */
/*   Updated: 2016/11/09 12:20:00 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;
	int		occu;

	count = 0;
	occu = 0;
	if (str[0] == '\0')
		return (NULL);
	while (str[count] != '\0')
	{
		if (str[count] == (unsigned char)c)
			occu = count;
		count++;
	}
	if (c == '\0')
		return (char *)(&str[count]);
	if (occu == 0 && str[0] != c)
		return (NULL);
	return (char *)(&str[occu]);
}
