/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_100args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:09:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/10 17:17:20 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_100args(ps_list *ps, int size)
{
	ps->lsc = size - 1;
	ps->size = size;
	ps->action = 0;
	ps->step = 1;
	ps->div = 4;
	ps->size_block = (ps->size / ps->div) / 2;
	ps->sizemax = size;
	ft_sort_sc(ps, size);
	ft_index(ps, size);
	if (size < 21)
		ft_20args(ps);
	else
		ft_order(ps);
}
