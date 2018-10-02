/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 20:10:09 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/08 14:33:09 by amarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*new;
	t_list	*tmp;

	new = f(lst);
	tmp = new;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		tmp = tmp->next;
	}
	return (new);
}
