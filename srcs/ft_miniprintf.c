/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_miniprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 11:19:47 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:34:25 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int		count;

	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static int	ft_printf_string(va_list pa, int fd)
{
	char *str;

	str = va_arg(pa, char *);
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}

static int	ft_printf_nb(va_list pa, int fd)
{
	int	nbr;

	nbr = va_arg(pa, int);
	ft_putnbr_fd(nbr, fd);
	return (ft_nbrlen(nbr));
}

int			mprintf(int fd, char *str, ...)
{
	va_list	pa;
	int		ret;
	int		count;

	ret = 0;
	count = 0;
	va_start(pa, str);
	while (str[count] != '\0')
	{
		if (str[count] == '%' && str[count + 1] == 's' && ++count)
			ret += ft_printf_string(pa, fd);
		else if (str[count] == '%' && str[count + 1] == 'd' && ++count)
			ret += ft_printf_nb(pa, fd);
		else if (++ret)
			ft_putchar_fd(str[count], fd);
		count++;
	}
	va_end(pa);
	return (ret);
}
