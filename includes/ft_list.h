/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:38:49 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 14:23:01 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		g_row;
int		g_col;
int		g_side;
char	g_a;
char	g_b;
char	g_c;
int		ft_string_lenght(char *argv);
void	ft_create_matrix(char *argvg_, char **ptr);
int		ft_atoi(char *str);
int		ft_lenght(int fd);
char	*ft_fill_str(char *argv, char *str);
void	ft_sign(char *str, char *argv, int lenght);
void	ft_algoritm(int **a, char **p);
void	ft_second_matrix(char **a, char **p);
void	ft_find_i_j_box(int **a, char **p);
void	ft_fill_box(char **p, int i, int j);
void	ft_print_box(char **p);
int		check(char *file);
void	fill(char *file, char **tab);
void	int_fill(char **tab);
int		ft_treatment_files(int argc, char **argv);
int		ft_create_file(int argc, char **argv);

#endif
