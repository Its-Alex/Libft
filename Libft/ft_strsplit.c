/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 23:17:04 by alex              #+#    #+#             */
/*   Updated: 2016/11/08 16:38:56 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_count_parts(const char *s, int c)
{
	unsigned int	count;
	int				state;

	state = 0;
	count = 0;
	while (*s != '\0')
	{
		if (state == 1 && *s == c)
			state = 0;
		if (state == 0 && *s != c)
		{
			state = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static	unsigned int	ft_len_parts(const char *s, int c)
{
	unsigned int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char					**ft_strsplit(const char *s, char c)
{
	char			**str;
	unsigned int	nb_word;
	unsigned int	index;

	index = 0;
	nb_word = ft_count_parts(s, c);
	if ((str = (char **)malloc(sizeof(char*) * ft_count_parts(s, c))) == NULL)
		return (NULL);
	while (nb_word-- > 0)
	{
		while (*s == c && *s != '\0' && nb_word != ft_count_parts(s, c))
			s++;
		str[index] = ft_strsub((const char *)s, 0,
				ft_len_parts((const char *)s, c));
		if (str[index] == NULL)
			return (NULL);
		s = s + ft_len_parts(s, c);
		index++;
	}
	str[index] = NULL;
	return (str);
}
