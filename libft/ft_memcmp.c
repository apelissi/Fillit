/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:13:47 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 15:48:06 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tr1;
	unsigned char	*tr2;

	tr1 = (unsigned char *)s1;
	tr2 = (unsigned char *)s2;
	i = 0;
	while (i < n && tr1[i] == tr2[i])
		i++;
	if (i == n)
		return (0);
	return (tr1[i] - tr2[i]);
}
