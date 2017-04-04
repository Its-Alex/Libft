/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/20 23:15:57 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:34:19 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_getlen(int value, int base)
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

static	int		ft_getstr(int value, int base, char *str)
{
	int		rest;
	int		count;

	count = 0;
	rest = 0;
	while (value != 0)
	{
		rest = value % base;
		str[count++] = (rest > 10) ? (rest - 10) + 'A' : rest + '0';
		value = value / base;
	}
	return (count);
}

static	int		is_negative(int *value)
{
	int		sign;

	sign = 1;
	if (*value < 0)
	{
		*value = -*value;
		sign = -1;
	}
	return (sign);
}

char			*ft_itoa_base(int value, int base)
{
	int		sign;
	int		count;
	char	*str;

	count = 0;
	sign = is_negative(&value);
	if (base < 2 || base > 16)
		return ("");
	if (value == 0 || value == -0)
		return ("0");
	if (value == -2147483648)
		return ("-2147483648");
	if (value == 2147483647)
		return ("2147483647");
	if ((str = ft_strnew(ft_getlen(value, base) + sign))
			== NULL)
		return (NULL);
	count = ft_getstr(value, base, str);
	if (sign < 0 && base == 10)
		str[count++] = '-';
	str[count] = '\0';
	ft_strrev(str);
	return (str);
}
