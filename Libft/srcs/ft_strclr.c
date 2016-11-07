/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 13:18:33 by alex              #+#    #+#             */
/*   Updated: 2016/11/04 11:17:56 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	size_t	count;
	size_t	size;

	count = 0;
	if (s)
	{
		size = ft_strlen(s);
		while (count <= size)
			s[count++] = '\0';
	}
}