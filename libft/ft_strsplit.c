/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:25:43 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 18:58:38 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**tab_malloc(char const *str, char c)
{
	int		w;
	char	**tab;

	w = 0;
	if (*str != c)
		w++;
	while (*str)
	{
		if (*(str - 1) == c && *str != c)
			w++;
		str++;
	}
	if (!(tab = (char **)malloc((w + 1) * sizeof(str))))
		return (NULL);
	return (tab);
}

static char const	*word_creation(char **tab, char const *str, char c, int w)
{
	int		i;
	int		j;

	i = 0;
	while (*(str + i) != c && *(str + i))
		i++;
	if (!(tab[w] = (char *)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	tab[w][i] = 0;
	j = 0;
	while (j < i)
	{
		tab[w][j] = *str;
		j++;
		str++;
	}
	return (str);
}

char				**ft_strsplit(char const *str, char c)
{
	size_t	w;
	char	**tab;

	w = 0;
	if (str == NULL)
		return (NULL);
	if ((tab = tab_malloc(str, c)) == NULL)
		return (NULL);
	while (*str)
	{
		if (*str && *str != c)
		{
			if (!(str = word_creation(tab, str, c, w)))
				return (NULL);
			w++;
		}
		else
			str++;
	}
	tab[w] = 0;
	return (tab);
}
