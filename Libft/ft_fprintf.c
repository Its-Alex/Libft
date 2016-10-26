/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 22:55:31 by alex              #+#    #+#             */
/*   Updated: 2016/05/07 21:45:34 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static int  putcase(va_list args, char letter /*, char secondletter*/)
{
	int countletter;

	countletter = 0;
	switch (letter)
	{
		case 'D': case 'd':
			ft_putnbr(va_arg(args, int));
			break;
		case 'C': case 'c':
			ft_putchar(va_arg(args, int));
			break;
		case 'S': case 's':
			ft_putstr(va_arg(args, char*));
			break;
		case '%':
			ft_putchar('%');
			break;
	}
	/*case 'L': case 'l':
	    if (secondletter == 'd' || secondletter == 'D')
	        ft_putlong(va_arg(args, long));
	    if (secondletter == 'f' || secondletter == 'F')
	        ft_putfloat(va_arg(args, float));
	    if (secondletter == 'D' || secondletter == 'd'
	 || secondletter == 'F' || secondletter == 'f')
	        countletter = 2;
	   case 'F': case 'f':
	    ft_putdouble(va_arg(args, double));
	   case 'P': case 'p':
	    ft_putpointeur(va_arg(args, void *));
	   case 'H': case 'h':
	    ft_putshort(va_arg(args, short));
	   case 'X': case 'x':
	    ft_convertIntToHexa(va_arg(args, int));*/
	return (countletter);
}

void        ft_fprintf(const char *str, ...)
{
	va_list args;
	int     i;
	int     countletter;

	va_start(args, str);
	i           = 0;
	countletter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			countletter = putcase(args, str[i + 1] /*, str[i + 2]*/);
			if (countletter == 2)
				i++;
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
}
