/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 07:18:56 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 07:26:53 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(void ***tab, size_t n)
{
	if (tab != NULL)
	{
		while (n-- > 0 && *tab != NULL)
			if ((*tab)[n] != NULL)
				free((*tab)[n]);
		free(*tab);
		*tab = NULL;
	}
}
