/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 15:05:51 by malexand          #+#    #+#             */
/*   Updated: 2016/05/07 14:12:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(char *str)
{
	int negative;
	int nbr;
	int i;

	negative = 0;
	nbr      = 0;
	i        = 0;
	if (str[i] == 45)
		negative = 1;
	while (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += ((int)str[i]) - 48;
		i++;
	}
	if (negative == 1)
		return (-nbr);
	return (nbr);
}
