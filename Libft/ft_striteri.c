/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 13:41:33 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 13:44:46 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	count;

	count = 0;
	if (s && f)
	{
		while (s[count])
		{
			f(count, &s[count]);
			count++;
		}
	}
}