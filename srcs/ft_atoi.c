/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:40:28 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:34:28 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int negative;
	int nbr;
	int i;

	if (str == NULL || str[0] == '\0' || !str)
		return (0);
	negative = 0;
	nbr = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == 45)
		negative = 1;
	if (str[i] == 45 || str[i] == 43)
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
