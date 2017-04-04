/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:45:12 by malexand          #+#    #+#             */
/*   Updated: 2017/02/16 17:34:16 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freetab(char **tab)
{
	int	count;

	count = 0;
	if (tab == NULL)
	{
		free(tab);
		tab = NULL;
		return ;
	}
	while (tab[count])
	{
		ft_strdel(&tab[count]);
		tab[count] = NULL;
		count++;
	}
	ft_strdel(&tab[count]);
	tab[count] = NULL;
	free(tab);
	tab = NULL;
}
