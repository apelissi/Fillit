/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 20:10:29 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/07 22:15:16 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *c, size_t c_s)
{
	t_list	*res;

	if (!(res = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(res->content = (void *)malloc(c_s)))
		return (NULL);
	res->content_size = c_s;
	if (c)
		ft_memcpy(res->content, c, c_s);
	else
	{
		res->content = NULL;
		res->content_size = 0;
	}
	res->next = NULL;
	return (res);
}
