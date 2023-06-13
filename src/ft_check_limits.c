/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_limits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:04:26 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/13 16:14:43 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_limits(char *str)
{
	long	n;

	n = ft_atoi_long(str);
	if (n > INT_MAX || n < INT_MIN)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}
