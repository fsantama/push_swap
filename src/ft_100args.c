/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_100args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:09:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/05 13:32:09 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_100args(ps_list *ps, int size)
{
	ps->lsc = size - 1;
	ps->size = size;
	ps->action = 0;
	ft_sort_sc(ps, size);
	ft_index(ps, size);
	if (size < 21)
		ft_20args(ps);
	else
		ft_order(ps);
}
