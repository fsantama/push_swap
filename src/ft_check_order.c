/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:54:12 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/14 18:36:04 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_order(ps_list *ps, int size)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	while (i < size)
	{
		if (ps->sa[i - 1] > ps->sa[i])
			return (0);
		i++;
	}
	return (1);
}
