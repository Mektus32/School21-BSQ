/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:45:48 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/19 12:41:17 by lcrawn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_lenght(int fd)
{
	int		lenght;
	char	buf[1];

	lenght = 0;
	while (read(fd, buf, 1))
	{
		if (buf[0] == '\n')
			break ;
		lenght++;
	}
	return (lenght);
}
