/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 21:53:03 by alex              #+#    #+#             */
/*   Updated: 2017/02/16 17:34:27 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_dtrim(char const *s)
{
	int		count_trim;
	int		count;
	char	*tmp;

	count_trim = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[count_trim] == 32 || s[count_trim] == '\n' ||
		s[count_trim] == '\t')
	{
		count_trim++;
	}
	if ((tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s) + 1 - count_trim)))
		== NULL)
		return (NULL);
	while (s[count_trim + count])
	{
		tmp[count] = s[count_trim + count];
		count++;
	}
	tmp[count] = '\0';
	return (tmp);
}

static	char	*ft_ltrim(char *s)
{
	int		count_trim;
	int		count;
	int		len;
	char	*tmp;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	count_trim = 0;
	count = 0;
	while (s[len - count_trim] == 32 || s[len - count_trim] == '\n' ||
		s[len - count_trim] == '\t')
	{
		count_trim++;
	}
	if ((tmp = (char *)malloc(sizeof(*tmp) * (len + 2 - count_trim))) == NULL)
		return (NULL);
	len++;
	while (count < len - count_trim)
	{
		tmp[count] = s[count];
		count++;
	}
	tmp[count] = '\0';
	return (tmp);
}

char			*ft_strtrim(char const *s)
{
	if (!s)
		return (NULL);
	if (!ft_ltrim(ft_dtrim(s)))
		return (NULL);
	return (ft_ltrim(ft_dtrim(s)));
}
