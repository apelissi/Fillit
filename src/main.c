/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:48:16 by apelissi          #+#    #+#             */
/*   Updated: 2018/01/09 09:38:16 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	error(void)
{
	ft_putstr("error\n");
	exit(0);
}

static void	usage(void)
{
	ft_putstr("usage: ./fillit source_file\n");
	exit(0);
}

static int	calc_dim(int d)
{
	int		s;

	s = 2;
	while (s * s < d * 4)
		s++;
	return (s);
}

char		**crea(int i)
{
	char	**tab;
	int		j;
	int		k;

	j = 0;
	k = 0;
	tab = (char **)malloc((i + 1) * sizeof(char *));
	while (j < i)
	{
		tab[j] = (char *)malloc((i + 1) * sizeof(char));
		while (k < i)
		{
			tab[j][k] = '.';
			k++;
		}
		tab[j][k] = '\0';
		j++;
		k = 0;
	}
	tab[i] = NULL;
	return (tab);
}

int			main(int argc, char **argv)
{
	char	**res;
	char	**tab;
	int		d;
	int		*i;
	int		t[2];

	if (argc != 2)
		usage();
	d = 0;
	t[0] = 0;
	i = &t[0];
	if (!(tab = recup(argv[1])))
		error();
	while (tab[d])
		d++;
	t[1] = calc_dim(d);
	while (t[0] < d)
	{
		res = crea(t[1]++);
		resolv(tab, res, i, d);
	}
	return (0);
}
