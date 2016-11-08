/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:09 by malexand          #+#    #+#             */
/*   Updated: 2016/11/08 17:22:02 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		count;
	int		occu;

	count = 0;
	occu = 0;
	while (str[count] != '\0')
	{
		if (str[count] == (unsigned char)c)
			occu = count;
		printf("%c, %c, %d\n", str[count], c, occu);
		count++;
	}
	return (char *)(&str[count]);
}
