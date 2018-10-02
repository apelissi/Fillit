/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:59:35 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/08 13:52:47 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

static int	numberer(char *str, char *base, int i)
{
	int		nb;
	int		k;
	int		j;

	nb = 0;
	k = 0;
	while (base[k])
		k++;
	while (in_base(str[i], base))
	{
		j = 0;
		while (base[j] != str[i])
			j++;
		nb = nb * k + j;
		i++;
	}
	return (nb);
}

static int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		s;
	long	nb;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	s = 1;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	nb = numberer(str, base, i);
	nb *= s;
	return (nb);
}

static char	*ft_itoa_base(int nbr, char *base)
{
	int		i;
	int		j;
	char	*str;
	int		bn;

	i = 0;
	while (base[i])
		i++;
	bn = nbr;
	j = (nbr == 0 ? 1 : 0);
	while (nbr != 0)
	{
		nbr /= i;
		j++;
	}
	str = malloc(sizeof(char) * (j + 1));
	str[j] = 0;
	while (j > 0)
	{
		j--;
		str[j] = base[bn % i];
		bn /= i;
	}
	return (str);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
