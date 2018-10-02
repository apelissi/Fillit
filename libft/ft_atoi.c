/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 18:19:45 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 19:22:48 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		s;
	int		nb;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	s = 1;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	nb *= s;
	return (nb);
}
