/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:15:53 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 14:34:41 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		min(int a, int b, int c)
{
	int min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	ft_algoritm(int **a, char **p)
{
	int i;
	int j;

	i = 0;
	while (i <= g_row)
	{
		j = 0;
		while (j <= g_col)
		{
			if (i * j > 0)
			{
				if (a[i][j] != 0)
					a[i][j] = min(a[i][j - 1],
							a[i - 1][j], a[i - 1][j - 1]) + 1;
				if (a[i][j] > g_side)
					g_side = a[i][j];
			}
			j++;
		}
		i++;
	}
	ft_find_i_j_box(a, p);
}
