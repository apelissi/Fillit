/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:40:42 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 20:04:01 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
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
		dst++;
		if ((unsigned char)c == s[i])
			return (dst);
		i++;
	}
	return (NULL);
}
