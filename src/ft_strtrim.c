/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:02:04 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/18 05:19:51 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		i = 0;
		j = ft_strlen(s);
		while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		while (j > i && ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n'
	|| s[j] == '\0')))
			j--;
		k = 0;
		if ((str = ft_strnew(j - i + 1)) != NULL)
		{
			while (i <= j)
				str[k++] = s[i++];
			str[k] = '\0';
		}
	}
	return (str);
}
