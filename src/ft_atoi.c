/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 18:56:20 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/05 12:00:03 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negative;

	i = 0;
	nbr = 0;
	negative = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] && ((str[i] >= '0') && (str[i] <= '9')))
	{
		nbr *= 10;
		nbr += (int)str[i] - 48;
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}
