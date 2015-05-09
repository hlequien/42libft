/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 21:17:49 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 07:29:28 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*compute_split(char **tab_str, char *s, size_t *len, char c)
{
	char *ptr;

	ptr = s;
	while (*s == c && *s != '\0')
		s++;
	if (ft_strchr(s, (char)c) == NULL)
		*len = ft_strlen(s);
	else
		*len = ft_strchr(s, (char)c) - (s);
	if ((*tab_str = ft_strnew(*len)) == NULL)
		return (NULL);
	ft_strncpy(*tab_str, (char *)s, *len);
	(*tab_str)[*len] = '\0';
	*len = *len + (s - ptr);
	return (*tab_str);
}

static size_t	word_count(char *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nb_wd;
	size_t	i;
	size_t	j;
	size_t	len;
	char	**tab_str;

	tab_str = NULL;
	if (s != NULL)
	{
		i = 0;
		j = 0;
		nb_wd = word_count((char *)s, c);
		tab_str = (char **)malloc(sizeof(char *) * nb_wd + 1);
		while (i < nb_wd && tab_str != NULL)
		{
			if ((compute_split(&tab_str[i], (char *)s + j, &len, c)) == NULL)
				ft_free_tab((void ***)&tab_str, i);
			j = j + len;
			i++;
		}
		if (tab_str != NULL)
			tab_str[i] = NULL;
	}
	return (tab_str);
}
