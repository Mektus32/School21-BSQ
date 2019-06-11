/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_i_j_box.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 10:23:06 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 14:37:15 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define FRE i = -1; while (++i < g_row) free(a[i]); free(a);

void	ft_find_i_j_box(int **a, char **p)
{
	int i;
	int j;
	int f;

	f = 0;
	i = 0;
	while (i <= g_row)
	{
		if (f == 1)
			break ;
		j = 0;
		while (j <= g_col)
		{
			if (a[i][j] == g_side)
			{
				ft_fill_box(p, i - g_side, j - g_side);
				f = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	ft_print_box(p);
	FRE;
}
