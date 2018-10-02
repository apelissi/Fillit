/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:01:41 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 13:17:35 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (haystack == needle)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && haystack[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
