/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:08:45 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/14 16:14:01 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	ft_atoi_long(const char *str)
{
	int		i;
	int		sign;
	long	b;

	i = 0;
	sign = 1;
	b = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	if (str[i] == 45)
		sign *= -1;
	if (str[i] == 43 || sign == -1)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = (str[i] - '0') + (b * 10);
		i++;
	}
	return (sign * b);
}
