/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:15:22 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 14:08:29 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_create_matrix(char *argv, char **ptr)
{
	char	buf[1];
	int		i;
	int		fd;
	int		len;

	fd = open(argv, O_RDWR);
	while (read(fd, buf, 1))
		if (buf[0] == '\n')
			break ;
	i = 0;
	len = ft_lenght(fd);
	ptr = (char**)malloc(sizeof(char*) * g_row);
	while (i < g_row)
	{
		ptr[i] = (char*)malloc(sizeof(char) * len + 1);
		i++;
	}
	fill(argv, ptr);
}
