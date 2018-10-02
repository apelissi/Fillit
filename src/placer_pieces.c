/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placer_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 15:07:00 by apelissi          #+#    #+#             */
/*   Updated: 2017/12/14 17:10:24 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	efface(char **tab, int p, char c)
{
	int	i;
	int j;

	i = 0;
	while (p)
	{
		j = 0;
		while (tab[i][j] && p)
		{
			if (tab[i][j] == c)
			{
				tab[i][j] = '.';
				p--;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int			placer(char **tab, char *piece, int x, char c)
{
	t_x		*w;

	if (!(w = (t_x *)malloc(sizeof(t_x))))
		return (0);
	w->p = 0;
	w->i = 0;
	w->j = -1;
	w->l = ft_strlen(tab[0]);
	w->y = x % w->l;
	x = x / w->l;
	while (w->p < 4)
	{
		while (w->i < 20 && piece[w->i] != '#')
			w->i++;
		if (w->j == -1)
			w->j = w->i;
		x = x + w->i / 5 - w->j / 5;
		w->y = w->y + w->i % 5 - w->j % 5;
		if (x >= w->l || w->y >= w->l || tab[x][w->y] != '.')
			return (efface(tab, w->p, c));
		tab[x][w->y] = c;
		w->p++;
		w->j = w->i++;
	}
	return (1);
}
