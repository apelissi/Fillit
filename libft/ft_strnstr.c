/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:01:41 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 15:46:26 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*n)
		return ((char *)h);
	j = 0;
	while (j < len && *h)
	{
		i = 0;
		while (h[i] == n[i] && h[i] && n[i] && (i + j) < len)
			i++;
		if (!n[i])
			return ((char *)h);
		h++;
		j++;
	}
	return (NULL);
}
