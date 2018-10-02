/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:59:09 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 19:00:12 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tr;

	if (s == NULL)
		return (NULL);
	if (!(tr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tr[i] = s[start + i];
		i++;
	}
	tr[i] = 0;
	return (tr);
}
