/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:00:19 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/09 18:59:32 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int i;
	int pos;
	int res;

	i = 0;
	res = 0;
	pos = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		pos = -1 * (str[i] == '-') + (str[i] == '+');
		i++;
	}
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
		res = res * 10 + (int)(str[i++] - '0');
	return (pos * res);
}
