/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:19:39 by malexand          #+#    #+#             */
/*   Updated: 2016/11/04 13:26:59 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	int		count_big;
	int		count_little;

	count_big = 0;
	count_little = 0;
	while (big[count_big] != '\0' && count_big < (int)n)
	{
		if (big[count_big] == little[0])
			while (big[count_big + count_little] == little[count_little]
					&& little[count_little] != '\0'
					&& big[count_big + count_little] != '\0'
					&& count_big + count_little < (int)n)
				count_little++;
		if (count_little == (int)ft_strlen(little))
			return ((char *)big + count_big);
		else if (count_little != 0)
			count_little = 0;
		count_big++;
	}
	return (NULL);
}
