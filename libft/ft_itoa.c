/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:50:22 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/10 18:21:13 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbsize(int n)
{
	int				i;

	i = (n < 0 ? 1 : 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				i;
	int				minus;

	if (!n)
		str = ft_strdup("0");
	nb = (n < 0 ? -n : n);
	minus = (n < 0 ? 1 : 0);
	i = nbsize(n);
	if (!(str = (char *)malloc((i + minus) * sizeof(char))))
		return (NULL);
	str[i] = 0;
	str[0] = (minus ? '-' : '0');
	while (nb && i > 0 && str[i] != '-')
	{
		if (!(!i-- && minus))
			str[i] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
