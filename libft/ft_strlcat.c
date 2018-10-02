/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:39:42 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/06 13:04:02 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (len1 >= n)
		return (len2 + n);
	ft_strncat(dst, src, n - len1 - 1);
	return (len1 + len2);
}
