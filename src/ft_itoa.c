/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 01:06:03 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/14 04:19:04 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_n_digit(int nb, size_t n)
{
	while (n > 1)
	{
		nb = nb / 10;
		n--;
	}
	return (nb % 10);
}

char		*ft_itoa(int n)
{
	char	*s;
	size_t	sz;
	int		tmp;
	int		i;

	s = NULL;
	sz = 1;
	tmp = n;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	while (tmp >= 10 || tmp <= -10)
		tmp = tmp / 10 + (sz++ * 0);
	if (n < 0)
		sz++;
	if ((s = ft_strnew(sz)) == NULL)
		return (NULL);
	i = -1;
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1 + (0 * i++);
	}
	while ((size_t)++i < sz)
		s[i] = ('0' + (char)get_n_digit(n, sz - i));
	return (s);
}
