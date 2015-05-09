/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:44:12 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/07 17:21:20 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((unsigned char)s2[i] == (unsigned char)s1[i] &&
	(unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
