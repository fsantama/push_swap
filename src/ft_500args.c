/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_500args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:39:51 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/11 17:56:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_500args(ps_list *ps, int size)
{
	ps->lsc = size - 1;
	ps->size = size;
	ps->action = 0;
	ps->step = 1;
	ps->div = 5;
	ps->size_block = (ps->size / ps->div) / 2;
	ps->sizemax = size;
	ft_sort_sc(ps, size);
	ft_index(ps, size);
	ft_order(ps);
}
