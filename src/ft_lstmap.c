/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 01:40:50 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 05:58:41 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first_elem;
	t_list *tmp;

	first_elem = NULL;
	if (lst != NULL && f != NULL)
	{
		if ((first_elem = (*f)(lst)) == NULL)
			return (NULL);
		tmp = first_elem;
		tmp->next = NULL;
		while (lst->next != NULL)
		{
			lst = lst->next;
			tmp->next = (*f)(lst);
			if (tmp->next == NULL)
			{
				ft_lstdel(&first_elem, &ft_lstdelcontent);
				return (NULL);
			}
			tmp = tmp->next;
		}
	}
	return (first_elem);
}
