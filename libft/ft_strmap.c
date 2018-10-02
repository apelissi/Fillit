/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:41:35 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 19:00:57 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tr;

	if (s == NULL)
		return (NULL);
	if (!(tr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tr[i] = f(s[i]);
		i++;
	}
	tr[i] = 0;
	return (tr);
}
