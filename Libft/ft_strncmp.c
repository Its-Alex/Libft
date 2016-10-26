/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 17:33:25 by root              #+#    #+#             */
/*   Updated: 2016/06/26 18:08:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t num)
{
	size_t count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0' && num > count)
		count++;
	return (s1[count] - s2[count]);
}
