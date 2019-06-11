/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcrawn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:21:16 by lcrawn            #+#    #+#             */
/*   Updated: 2019/02/20 14:34:53 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define BUF_SIZE 1
#define STR while((read(fd, buf, 1))) if (buf[0] == '\n')break;
#define END if (s == 0 || g_row != s) return (0); return (1);
#define END2 close(fd); END;
#define PLUS j++; s += j; i = -1;

int		check(char *file)
{
	int		i;
	int		fd;
	int		j;
	int		s;
	char	buf[BUF_SIZE + 1];

	i = 0;
	s = 0;
	fd = open(file, O_RDWR);
	STR;
	while ((read(fd, buf, 1)))
	{
		j = 0;
		if (buf[0] != '\n' && (buf[0] != g_a && buf[0] != g_b))
			return (0);
		if (buf[0] == '\n')
		{
			if (g_col != i)
				return (0);
			PLUS;
		}
		i++;
	}
	END2;
}
