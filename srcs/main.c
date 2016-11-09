/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 16:19:52 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 15:56:10 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int		main(void)
{
	/*char           str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
    char            str2[] = "Bonjour";*/
    char            str3[] = "  \t\t\t   ";
    char            *r;

    /*ft_strtrim(NULL);
    r = ft_strtrim(str);
    if (strcmp(r, "Bon\t \njour"))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t    \t\nBon\t \njour\t\n  \n     \").\nExpected ret = \"Bon\t \njour\" \
               but have ret = \"%s\"\033[0m\n", __LINE__ - 2, __func__, r);
        free(r);
        return (0);
    }
    free(r);
    r = ft_strtrim(str2);
    if (strcmp(r, "Bonjour") || (str2 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"Bonjour\").\nExpected ret = \"Bonjour\" and differents pointers\
               but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str2, r);
        free(r);
        return (0);
    }
    free(r);*/
    r = ft_strtrim(str3);
    if (strcmp(r, "") || (str3 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t\t\t  \").\nExpected ret = \"\" and different\
s pointers but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str3, r);
        free(r);
        return (0);
    }
    free(r);
    return (1);
}
