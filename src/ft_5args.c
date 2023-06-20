/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:07:45 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/20 16:53:50 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_5args_2(ps_list *ps, int *n)
{
	if (n[0] > n[3] && n[1] > n[3] && n[2] > n[3] && n[3] < n[4])
	{
		ft_rra(ps);
		ft_rra(ps);
		ft_pb(ps);
	}
	if (n[0] > n[4] && n[1] > n[4] && n[2] > n[4] && n[3] > n[4])
	{
		ft_rra(ps);
		ft_pb(ps);
	}
}

void	ft_5args(ps_list *ps, int *n)
{
	if (ps->na == 5)
	{
		if (n[0] < n[1] && n[0] < n[2] && n[0] < n[3] && n[0] < n[4])
			ft_pb(ps);
		if (n[0] > n[1] && n[1] < n[2] && n[1] < n[3] && n[1] < n[4])
		{
			ft_sa(ps->sa);
			ft_pb(ps);
		}
		if (n[0] > n[2] && n[1] > n[2] && n[2] < n[3] && n[2] < n[4])
		{
			ft_ra(ps);
			ft_sa(ps->sa);
			ft_pb(ps);
		}
		ft_5args_2(ps, n);
	}
	ft_4args(ps, n);
	ft_pa(ps);
}
