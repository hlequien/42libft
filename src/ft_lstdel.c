/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 00:42:07 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/11 09:13:42 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nxt;

	if (alst != NULL)
	{
		nxt = NULL;
		while (*alst != NULL)
		{
			nxt = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = nxt;
		}
		alst = NULL;
	}
}
