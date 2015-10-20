/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:30:20 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/19 07:41:03 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tmp_str;

	tmp_str = NULL;
	tmp_str = ft_strnew(ft_strlen(s1));
	ft_memcpy(tmp_str, s1, ft_strlen(s1));
	return (tmp_str);
}
