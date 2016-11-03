/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 10:51:55 by malexand          #+#    #+#             */
/*   Updated: 2016/05/07 23:24:12 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(char *src)
{
	int	strlen;
	char	*str;

	strlen = ft_strlen(src);
	if (strlen == 0 || !src ||
		(str = (char *)(malloc(sizeof(char) * strlen))) == NULL)
		return (NULL);
	return (ft_strcpy(src, str));
}
