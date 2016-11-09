/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 20:03:01 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 13:24:11 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (!s1 || !s2)
		return (0);
	if (s1[0] == '\0' || s2[0] == '\0')
		return (1);
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0' &&
			count < n)
		count++;
	if (count == n || (count < n && s1[count] == s2[count]))
		return (1);
	else
		return (0);
}
