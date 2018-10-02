/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:25:36 by amarandi          #+#    #+#             */
/*   Updated: 2017/12/14 17:26:35 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct	s_x
{
	int			p;
	int			i;
	int			j;
	int			l;
	int			y;
}				t_x;
int				placer(char **tab, char *piece, int x, char c);
void			resolv(char **tab, char **res, int *i, int d);
char			**recup(char *str);
#endif
