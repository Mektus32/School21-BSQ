/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_files.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <ojessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:43:28 by ojessi            #+#    #+#             */
/*   Updated: 2019/06/11 15:54:37 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define END i++; close(fd); if (i != argc) write(1, "\n", 1);
#define FR i = 1; ptr = 0;

static	void	ft_puterror(void)
{
	write(1, "\x1b[31m\n", 7);
	write(2, "map error\n", 11);
}

int				ft_treatment_files(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*str;
	char	**ptr;

	FR;
	while (i < argc)
	{
		g_side = 0;
		if ((fd = open(argv[i], O_RDWR)) == -1)
			ft_puterror();
		else
		{
			str = (char*)malloc(sizeof(char) * ft_string_lenght(argv[i]));
			str = ft_fill_str(argv[i], str);
			ft_sign(str, argv[i], ft_string_lenght(argv[i]));
			if (!check(argv[i]))
				ft_puterror();
			else
				ft_create_matrix(argv[i], ptr);
			free(str);
		}
		END;
	}
	return (0);
}
