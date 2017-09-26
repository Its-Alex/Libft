/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdbl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:21:00 by malexand          #+#    #+#             */
/*   Updated: 2017/09/26 18:29:07 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdbl_fd(int fd, double d)
{
	if (d < 0.0 && d > -1.0)
		ft_putchar('-');
	ft_putnbr_fd(trunc(d), fd);
	d -= trunc(d);
	if (d < 0.0)
		d = -d;
	if (d != 0.0)
		ft_putchar('.');
	while (d != 0.0)
	{
		d = d * 10;
		ft_putnbr_fd(trunc(d), fd);
		d -= trunc(d);
	}
}
