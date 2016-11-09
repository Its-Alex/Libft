/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:18:00 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 15:20:07 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != c && *str != '\0')
		str++;
	if (*str == '\0' && c != '\0')
		return (NULL);
	return ((char*)str);
}
