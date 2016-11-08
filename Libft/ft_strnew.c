/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 13:12:37 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 17:18:07 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	count;

	count = 0;
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (count <= size)
		str[count++] = '\0';
	return (str);
}
