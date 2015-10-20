/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 21:54:18 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/11 03:28:50 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list *tmp;

	tmp = NULL;
	if ((tmp = (t_list *)malloc(sizeof(t_list))) != NULL)
	{
		tmp->content = NULL;
		if (content_size == 0 || content == NULL)
			tmp->content_size = 0;
		else if ((tmp->content = (void *)malloc(content_size)) != NULL)
		{
			ft_memcpy(tmp->content, content, content_size);
			tmp->content_size = content_size;
		}
		tmp->next = NULL;
	}
	return (tmp);
}
