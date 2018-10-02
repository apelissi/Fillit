/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:56:16 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 14:33:29 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (s[i] == (const char)c)
		return ((char *)s + i);
	if (s[i + 1] == (const char)c)
		return ((char *)s + i + 1);
	while (s[i] && i)
	{
		i--;
		if (s[i] == (const char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
