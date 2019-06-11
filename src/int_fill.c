/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcrawn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:50:24 by lcrawn            #+#    #+#             */
/*   Updated: 2019/02/20 14:49:20 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define ZERO i = -1; while (++i <= g_row) int_tab[i][0] = 0;
#define FRE i = -1; while (++i < g_row) free(tab[i]); free(tab);
#define ZERO2 j = -1; while (++j <= g_col) int_tab[0][j] = 0;
#define ALL ZERO; ZERO2; i = 0;
#define FT ft_second_matrix(tab, p); ALL;

void	int_fill(char **tab)
{
	int		**int_tab;
	char	**p;
	int		i;
	int		j;

	int_tab = (int**)malloc(sizeof(int*) * (g_row + 1));
	i = -1;
	while (++i <= g_row)
		int_tab[i] = (int*)malloc(sizeof(int) * (g_col + 1));
	p = (char**)malloc(sizeof(char*) * g_row);
	i = -1;
	while (++i < g_row)
		p[i] = (char*)malloc(sizeof(char) * (g_col + 1));
	FT;
	while (++i <= g_row)
	{
		j = 0;
		while (++j <= g_col)
			if (tab[i - 1][j - 1] == g_a)
				int_tab[i][j] = 1;
			else
				int_tab[i][j] = 0;
	}
	ft_algoritm(int_tab, p);
	FRE;
}
