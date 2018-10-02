/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:34:06 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/01 09:58:01 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
