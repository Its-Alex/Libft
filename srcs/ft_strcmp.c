/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 17:30:37 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:33:46 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	return ((unsigned char)(s1[count]) - (unsigned char)(s2[count]));
}
