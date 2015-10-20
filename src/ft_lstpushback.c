/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 04:49:33 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 07:44:55 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list *begin, void *content, size_t content_sz)
{
	if (begin != NULL)
		while (begin->next != NULL)
			begin = begin->next;
	begin->next = ft_lstnew(content, content_sz);
}
