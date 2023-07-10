/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:11:45 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/10 18:29:39 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_sb(ps_list *ps)
{
	
}

int	check_num_max(ps_list *ps)
{
	int	i;

	i = 0;
	while (1 <= ps->nb -1)
	{
		if (ps->sb[i] == ps->lsc)
			break;
		i++;
	}
	if ((ps->nb / 2) -i >= 0)
		return (0);
	else
		return (1);
}

void	order_sb(ps_list *ps)
{
	while(ps->na <ps->size)
	{
		if (ps->sb[0] == ps->lsc)
		{
			ft_pa(ps);
			ps->lsc--;
		}
		if (check_num_max(ps) == 1)
			rotate_sb(ps);
	}
}

void ft_order(ps_list *ps)
{
	ps->numbers = (ps->size / ps->div) * ps->step;
//	if (ps->step == ps->div)
//		ps->numbers = ps->sizemax - 3;
	while (ps->nb < ps->numbers)
	{
		if (ps->sa[0] < ps->numbers)
		{
			ft_pb(ps);
//			if (ps->sb[0] > ps->numbers - ps->size_block)
//				ft_rb(ps);
		}
		else
			ft_ra(ps);
	}
	ps->step++;
/*	if (ps->nb == ps->sizemax - 3)
	{
		ft_3args(ps, ps->sa);
		ps->lsc = ps->lsc - 3;
	}*/
	if (ps->step <= ps->div)
		ft_order(ps);
//	while (ps->step-- > 0)
	order_sb(ps);
}
