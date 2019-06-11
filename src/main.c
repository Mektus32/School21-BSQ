/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <ojessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:37:50 by lcrawn            #+#    #+#             */
/*   Updated: 2019/06/11 15:57:33 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char **argv)
{
	write(2, "\x1B[33m\n", 7);
	if (argc == 1)
		argc = ft_create_file(argc, argv);
	ft_treatment_files(argc, argv);
	return (0);
}
