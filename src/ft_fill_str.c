/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:02:07 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 13:26:25 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_fill_str(char *argv, char *str)
{
	char	buf[1];
	int		i;
	int		fd;

	i = 0;
	fd = open(argv, O_RDWR);
	while (read(fd, buf, 1))
	{
		if (buf[0] == '\n')
			break ;
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}
