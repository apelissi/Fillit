/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:47:34 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 19:22:10 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tr;

	if (s == NULL)
		return (NULL);
	if (!(tr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tr[i] = f(i, s[i]);
		i++;
	}
	tr[i] = 0;
	return (tr);
}
