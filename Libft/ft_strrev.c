/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 23:51:50 by malexand          #+#    #+#             */
/*   Updated: 2016/05/07 21:43:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(char *str)
{
	int  size;
	int  i;
	char tmp;

	i    = 0;
	size = 0;
	if (!str)
		return (NULL);
	while (str[size] != '\0')
		size++;
	while (i < size / 2)
	{
		tmp               = str[i];
		str[i]            = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}
