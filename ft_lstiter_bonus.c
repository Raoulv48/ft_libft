/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 12:43:33 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 13:11:36 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *list;

	list = lst;
	while (list != NULL)
	{
		if (list->content != NULL)
			f(list->content);
		list = list->next;
	}
}
