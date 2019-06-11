/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_lenght.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:23:53 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/18 18:07:17 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_string_lenght(char *argv)
{
	int		lenght;
	char	buf[1];
	int		fd;

	lenght = 0;
	fd = open(argv, O_RDWR);
	while ((read(fd, buf, 1)))
	{
		lenght++;
		if (buf[0] == '\n')
			break ;
	}
	close(fd);
	return (lenght);
}
