/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:49:00 by aguemy            #+#    #+#             */
/*   Updated: 2017/02/23 14:06:30 by aguemy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_multi(t_list **lst, int fd)
{
	t_list			*lst1;
	t_list			*lst2;
	t_fd			*node;

	lst1 = *lst;
	while (lst1 && lst1->content && ((t_fd*)(lst1->content))->filed != fd)
		lst1 = lst1->next;
	if (lst1 && lst1->content && ((t_fd*)(lst1->content))->str)
		return (((t_fd*)(lst1->content))->str);
	else
	{
		if (!(node = (t_fd*)malloc(sizeof(t_fd))))
			return (NULL);
		if ((lst2 = ft_lstnew(node, 0)))
		{
			free(node);
			((t_fd*)(lst2->content))->filed = fd;
			((t_fd*)(lst2->content))->str = NULL;
			ft_lstadd(lst, lst2);
		}
		return (NULL);
	}
}

void		ft_multi_up(t_list **lst, int fd, char *tmp1)
{
	t_list			*tmp;

	tmp = *lst;
	while (tmp && tmp->content && ((t_fd*)(tmp->content))->filed != fd)
		tmp = tmp->next;
	if (tmp && (t_fd*)(tmp->content))
		((t_fd*)(tmp->content))->str = tmp1;
}

int			ft_update(char **tmp1, char **tmp2, int *flag, int fd)
{
	char			buf[BUFF_SIZE + 1];
	char			*tmp3;
	int				lu;

	while ((!(*tmp2)) && (*flag > 0))
	{
		lu = read(fd, buf, BUFF_SIZE);
		if (lu == -1)
			return (-1);
		if (lu)
		{
			buf[lu] = '\0';
			if (!(*tmp1))
				*tmp1 = ft_strnew(1);
			tmp3 = ft_strjoin(*tmp1, buf);
			ft_strdel(tmp1);
			if (!(*tmp1 = tmp3))
				return (-1);
			*tmp2 = ft_strchr(*tmp1, '\n');
			(*flag)++;
		}
		else
			*flag = (*flag) * -1;
	}
	return (1);
}

void		line_update(char **tmp1, char **tmp2, char **line)
{
	char	*tmp3;

	if (*tmp2)
	{
		(*line) = ft_strnew(*tmp2 - *tmp1 + 1);
		(*line) = ft_strncpy(*line, *tmp1, *tmp2 - *tmp1);
		tmp3 = ft_strdup(*tmp2 + 1);
		ft_strdel(tmp1);
		*tmp1 = tmp3;
	}
	else
	{
		(*line) = ft_strdup(*tmp1);
		ft_strdel(tmp1);
		*tmp1 = ft_strnew(1);
	}
}

int			get_next_line(int fd, char **line)
{
	static t_list	*lst = NULL;
	char			*tmp2;
	int				flag;
	char			*tmp1;

	if (fd < 0)
		return (-1);
	flag = 1;
	tmp2 = NULL;
	if ((tmp1 = ft_multi(&lst, fd)))
		tmp2 = (char*)ft_strchr(tmp1, '\n');
	if (!tmp2)
		if (ft_update(&tmp1, &tmp2, &flag, fd) == -1)
			return (-1);
	if (flag != -1 || (tmp1 && tmp1[0]))
	{
		line_update(&tmp1, &tmp2, line);
		ft_multi_up(&lst, fd, tmp1);
		return (1);
	}
	else
	{
		(*line) = NULL;
		return (0);
	}
}
