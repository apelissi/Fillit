/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:08:52 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/01 14:53:58 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)src;
	while (n > 0)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
