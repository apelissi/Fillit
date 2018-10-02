/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:56:16 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 14:19:39 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (const char)c)
		return ((char *)s);
	while (*s)
	{
		s++;
		if (*s == (const char)c)
			return ((char *)s);
	}
	return (NULL);
}
