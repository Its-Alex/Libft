/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 13:18:33 by alex              #+#    #+#             */
/*   Updated: 2017/02/16 17:33:47 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
