/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:59:01 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 13:35:43 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sign(char *str, char *argv, int lenght)
{
	int		i;
	int		fd;
	char	buf[1];

	i = 0;
	g_c = str[--lenght - 1];
	g_b = str[--lenght - 1];
	g_a = str[--lenght - 1];
	str[lenght - 1] = ':';
	fd = open(argv, O_RDWR);
	while (read(fd, buf, 1))
		if (buf[0] == '\n')
			break ;
	g_col = ft_lenght(fd);
	close(fd);
	g_row = ft_atoi(str);
}
