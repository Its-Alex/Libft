/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 21:53:03 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 13:32:41 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strstart(const char *s)
{
	size_t count;

	count = 0;
	while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t' ||
			s[count] == '\f' || s[count] == '\v' || s[count] == '\r')
		count++;
	return (count);
}

static	size_t	ft_strstop(const char *s)
{
	size_t count;

	count = ft_strlen(s) - 1;
	while ((s[count] == ' ' || s[count] == '\n' || s[count] == '\t' ||
			s[count] == '\f' || s[count] == '\v' || s[count] == '\r')
			&& count > 0)
		count--;
	return (count);
}

char			*ft_strtrim(const char *s)
{
	if (!s)
		return (NULL);
	if (ft_strstart(s) >= ft_strstop(s))
		return ("");
	return (ft_strsub(s, ft_strstart(s), ft_strstop(s) - ft_strstart(s) + 1));
}
