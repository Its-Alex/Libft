/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/26 13:36:53 by root              #+#    #+#             */
/*   Updated: 2016/11/04 16:44:27 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	int	ft_getlen(int n)
{
	int		len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	int	ft_getstr(int n, char *str)
{
	int		rest;
	int		count;

	rest = 0;
	count = 0;
	while (n != 0)
	{
		rest = n % 10;
		str[count++] = rest + '0';
		n = n / 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	int		is_negative;
	int		count;
	char	*str;

	count = 0;
	is_negative = 0;
	if (n == 0)
	{
		str = (char *)ft_memalloc(sizeof(char) * 2);
		str[count++] = '0';
		str[count] = '\0';
	}
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	if ((str = (char *)ft_memalloc(sizeof(char) * (ft_getlen(n) + 1))) == NULL)
		return (NULL);
	count = ft_getstr(n, str);
	if (is_negative)
		str[count++] = '-';
	str[count] = '\0';
	ft_strrev(str);
	return (str);
}
