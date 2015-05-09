/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 01:27:09 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/13 02:29:45 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *ptr;

	while (lst != NULL && f != NULL)
	{
		ptr = lst->next;
		(*f)(lst);
		lst = ptr;
	}
}
