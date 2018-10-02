/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:15:16 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 18:59:33 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isnt(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*tr;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] && isnt(s[i]))
		i++;
	j = ft_strlen(s) - 1;
	while (isnt(s[j]) && j > i)
		j--;
	j++;
	if (!(tr = (char *)malloc((j - i + 1) * sizeof(char))))
		return (NULL);
	tr = ft_strncpy(tr, s + i, j - i);
	*(tr + j - i) = 0;
	return (tr);
}
