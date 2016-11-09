/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 16:19:52 by alex              #+#    #+#             */
/*   Updated: 2016/11/09 13:10:15 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Libft/libft.h"
//#include <unistd.h>
//#include <stdlib.h>
//#include <stdarg.h>
#include <stdio.h>
//#include <string.h>
//#include <fcntl.h>

char	*ft_strrchr(const char *str, int c);

t_list	*lstmap_f(t_list	*elem)
{
	free(elem);
	elem = ft_lstnew(ft_strdup("OK !"), 4);
	return (elem);
}

int		main(void)
{
	/*t_list *l = ft_lstnew(strdup(" 1 2 3 "), 8);
    t_list *ret;

    l->next = ft_lstnew(strdup("ss"), 3);
    l->next->next = ft_lstnew(strdup("-_-"), 4);

    ret = ft_lstmap(l, lstmap_f);


    printf("%s, %s, %s\n%s, %s, %s\n", l->content, l->next->content, l->next->next->content, ret->content, ret->next->content, ret->next->next->content);
    if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
   		printf("TRUE\n");*/

	char           str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
    char            str2[] = "Bonjour";
    char            str3[] = "  \t\t\t   ";
    char            *r;

    ft_strtrim(NULL);
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
    free(r);
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
