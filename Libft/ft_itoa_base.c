/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 23:15:57 by malexand          #+#    #+#             */
/*   Updated: 2016/11/04 11:42:51 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_getlen(int value, int base)
{
	int		len;

	len = 0;
	while (value != 0)
	{
		value = value / base;
		len++;
	}
	return (len);
}

static	int	ft_getstr(int value, char *str, int base)
{
	int		rest;
	int		count;

	count = 0;
	rest = 0;
	while (value != 0)
	{
		rest = value % base;
		str[count++] = ft_toupper((rest > 10) ? (rest - 10) + 'a' : rest + '0');
		value = value / base;
	}
	return (count);
}

char		*ft_itoa_base(int value, int base)
{
	int		is_negative;
	int		count;
	char	*str;

	count = 0;
	is_negative = 0;
	if (value == 0 || value == -0)
	{
		str = (char*)ft_memalloc(sizeof(char) * 2);
		str[count++] = '0';
		str[count] = '\0';
	}
	if (value < 0 && base == 10)
	{
		value = -value;
		is_negative = 1;
	}
	str = (char*)ft_memalloc(sizeof(char) * ft_getlen(value, base));
	count = ft_getstr(value, str, base);
	if (is_negative)
		str[count++] = '-';
	str[count] = '\0';
	ft_strrev(str);
	return (str);
}
