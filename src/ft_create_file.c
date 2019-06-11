/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 17:44:11 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 14:53:36 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_create_file(int argc, char **argv)
{
	int		fd;
	char	buf[1];
	int		ret;

	if ((fd = open("savefile", O_TRUNC | O_RDWR)))
	{
		while ((ret = read(1, buf, 1)) > 0)
			write(fd, buf, 1);
	}
	write(fd, "\n", 1);
	close(fd);
	argv[1] = "savefile";
	argc++;
	write(1, "\n", 1);
	return (argc);
}
