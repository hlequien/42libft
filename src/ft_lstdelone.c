/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 00:37:56 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/11 03:21:14 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst != NULL)
	{
		if (*alst != NULL)
		{
			(*del)((void *)((*alst)->content), (*alst)->content_size);
			free(*alst);
			*alst = NULL;
		}
	}
}
