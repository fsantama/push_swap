/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_100args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:09:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/27 11:05:12 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_100args(ps_list *ps, int size)
{
	ps->lsc = size - 1;
	ps->size = size;
	ft_sort_sc(ps, size);
	ft_index(ps, size);
/*	i = 0;
	while (ps->sa[i])
	{
		printf("Valor de sa[%d] = %d\n", i, ps->sa[i]);
		i++;
	}
	*/
//	if (size < 20)
//		ft_20args(ps, size);
//	else
//		ft_order(ps, size);
}
