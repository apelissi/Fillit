/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:48:16 by apelissi          #+#    #+#             */
/*   Updated: 2017/12/14 16:56:25 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	enlever_piece(char **res, char c)
{
	int		i;
	int		j;
	int		p;

	p = 4;
	i = 0;
	while (res[i] && p)
	{
		j = 0;
		while (res[i][j] && p)
		{
			if (res[i][j] == c)
			{
				p--;
				res[i][j] = '.';
			}
			j++;
		}
		i++;
	}
}

static void	afficher_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void		resolv(char **tab, char **res, int *i, int d)
{
	size_t	t[2];
	char	c;

	c = 'A' + *i;
	t[0] = -1;
	if (*i < d)
	{
		while (++t[0] < ft_strlen(res[0]) && *i < d)
		{
			t[1] = -1;
			while (++t[1] < ft_strlen(res[0]) && *i < d)
				if (placer(res, tab[*i], t[0] * ft_strlen(res[0]) + t[1], c))
				{
					*i = *i + 1;
					resolv(tab, res, i, d);
					if (*i < d)
					{
						enlever_piece(res, c);
						*i = *i - 1;
					}
				}
		}
	}
	else
		afficher_tab(res);
}
