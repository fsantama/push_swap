/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_limits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:04:26 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/13 13:17:12 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_limits(char *str)
{
	long	n;

	n = ft_atoi(str);
	if (n > INT_MAX || n < INT_MIN)
	{
		ft_putstr_fd("El número supera los límites\n", 2);
		return (1);
	}
	return (0);
}
