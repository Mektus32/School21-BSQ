/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcrawn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:52:19 by lcrawn            #+#    #+#             */
/*   Updated: 2019/02/20 14:07:15 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	fill(char *file, char **tab)
{
	int		fd;
	int		i;
	int		j;
	char	buf[1];

	i = 0;
	j = 0;
	fd = open(file, O_RDWR);
	while (read(fd, buf, 1))
		if (buf[0] == '\n')
			break ;
	while (read(fd, buf, 1))
	{
		if (buf[0] != '\n')
			tab[i][j] = buf[0];
		else
		{
			tab[i][j] = '\0';
			j = -1;
			i++;
		}
		j++;
	}
	close(fd);
	int_fill(tab);
}
