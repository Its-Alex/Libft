/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 16:19:52 by alex              #+#    #+#             */
/*   Updated: 2016/11/07 17:11:24 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

t_list	*lstmap_f(t_list	*elem)
{
	free(elem);
	elem = ft_lstnew(ft_strdup("OK!"), 4);
	return (elem);
}

int		main(void)
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "), 8);
    t_list *ret;

    l->next = ft_lstnew(strdup("ss"), 3);
    l->next->next = ft_lstnew(strdup("-_-"), 4);

    ret = ft_lstmap(l, lstmap_f);


    printf("%s, %s, %s\n%s, %s, %s\n", l->content, l->next->content, l->next->next->content, ret->content, ret->next->content, ret->next->next->content);
    if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
   		printf("TRUE\n");
}
