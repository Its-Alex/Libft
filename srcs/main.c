/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 16:19:52 by alex              #+#    #+#             */
/*   Updated: 2016/09/14 22:11:05 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	char src[15], dest;
	char *ret;

	ft_strcpy(src, "Salut");
	ft_strcpy(dest, 'l');

	ret = strchr(src, dest);

	printf("%s", ret);

	return(0);
}
