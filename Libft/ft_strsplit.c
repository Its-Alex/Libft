/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 23:17:04 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 13:46:30 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_str_find_next(const char *str, char c, int skip)
{
	if (skip)
		while (*str != '\0' && *str == c)
			str++;
	else
		while (*str != '\0' && *str != c)
			str++;
	return (str);
}

static int			ft_str_count_splits(const char *str, char c)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, c, 1);
		if (*str != '\0')
		{
			count++;
			str = ft_str_find_next(str, c, 0);
		}
	}
	return (count);
}

static char			**ft_arraydel(char **ret, int len)
{
	int count;

	count = 0;
	while (count < len)
		free(ret[count]);
	free(ret);
	return (NULL);
}

char				**ft_strsplit(char const *str, char c)
{
	char		**ret;
	int			count;
	const char	*next;

	if (str == NULL)
		return (NULL);
	ret = (char**)malloc(sizeof(char*) * (ft_str_count_splits(str, c) + 1));
	if (ret == NULL)
		return (NULL);
	count = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, c, 1);
		if (*str != '\0')
		{
			next = ft_str_find_next(str, c, 0);
			ret[count] = ft_strsub(str, 0, next - str);
			if (ret[count] == NULL)
				return (ft_arraydel(ret, count));
			count++;
			str = next;
		}
	}
	ret[count] = NULL;
	return (ret);
}
