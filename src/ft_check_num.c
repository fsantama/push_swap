/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:44:12 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/13 12:00:50 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	if (str[i] == 0)
	{
		ft_putstr_fd("El 0 no es un número válido\n", 2);
		return (1);
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 1)
		{
			ft_putstr_fd("Número no válido", 2);
			return (1);
		}
		i++;
	}
	return (0);
}
