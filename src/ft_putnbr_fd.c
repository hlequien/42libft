/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:04:44 by hlequien          #+#    #+#             */
/*   Updated: 2015/10/20 17:45:50 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	if (s)
	{
		ft_putstr_fd(s, fd);
		free(s);
	}
}
