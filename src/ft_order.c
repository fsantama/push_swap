/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:11:45 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/11 17:53:02 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	last_order(ps_list *ps)
{
	if (ps->sb[0] == ps->lsc - 1)
	{
		ft_pa(ps);
		ps->action = 1;
	}
	if (ps->sb[0] == ps->lsc)
	{
		ft_pa(ps);
		ps->lsc--;
		if (ps->action == 1)
		{
			ps->lsc--;
			ps->action = 0;
			ft_sa(ps->sa);
		}
//		if (ps->action == 2)
//		{
//			ps->lsc = ps->lsc - 2;
//			ps->action = 0;
//			ft_sa(ps->sa);
//			ft_rra(ps);
//		}
	}
	else
		ft_rb(ps);
}

void	rotate_sb(ps_list *ps)
{
//	if (ps->sb[0] == ps->lsc -2 && ps->action == 1)
//	{
//		ft_pa(ps);
//		ft_ra(ps);
//		ps->action = 2;
//	} 
	if (ps->sb[0] == ps->lsc - 1)
	{
		ft_pa(ps);
		ps->action = 1;
	}
	if (ps->sb[0] == ps->lsc)
	{
		ft_pa(ps);
		ps->lsc--;
		if (ps->action == 1)
		{
			ps->lsc--;
			ps->action = 0;
			ft_sa(ps->sa);
		}
	}
	else
		ft_rrb(ps);
}

void	check_num_max(ps_list *ps)
{
	int	i;

	i = 0;
	while (i <= ps->nb -1)
	{
		if (ps->sb[i] == ps->lsc)
			break;
		i++;
	}
	if ((ps->nb / 2) -i >= 0)
		last_order(ps);
	else
		rotate_sb(ps);
}

void	order_sb(ps_list *ps)
{
	while (ps->na < ps->size)
	{
		if (ps->sb[0] == ps->lsc && ps->action == 0)
		{
			ft_pa(ps);
			ps->lsc--;
		}
//		if (ps->sb[0] == ps->lsc -2 && ps->action == 1)
//		{
//			ft_pa(ps);
//			ft_ra(ps);
//			ps->action = 2;
//		}
		check_num_max(ps);
	}
}

void	ft_order(ps_list *ps)
{
	ps->numbers = (ps->size / ps->div) * (ps->step);
//	if (ps->step == ps->div)
//		ps->numbers = ps->sizemax - 3;
	while (ps->nb < ps->numbers && ps->step <= ps->div)
	{
		if (ps->sa[0] < ps->numbers)
		{
			ft_pb(ps);
			if (ps->sb[0] > ps->numbers - ps->size_block && ps->nb > 1)
				ft_rb(ps);
		}
		else
			ft_ra(ps);
	}
	ps->step++;
//	if (ps->nb == ps->sizemax - 3)
//	{
//		ft_3args(ps, ps->sa);
//		ps->lsc = ps->lsc - 3;
//	}
	if (ps->step <= ps->div)
		ft_order(ps);
	while (ps->step-- > 0)
		order_sb(ps);
}
