/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 11:04:42 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:34:27 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(size_t *a, size_t *b)
{
	size_t	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}

void	ft_swap_int(int *a, int *b)
{
	int		nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}

void	ft_swap_char(char *a, char *b)
{
	char	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}
