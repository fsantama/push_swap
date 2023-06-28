/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:35:55 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/27 18:14:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_4args(ps_list *ps, int *n)
{
//	if (ps->na == 4)
//	{
		if (n[0] < n[1] && n[0] < n[2] && n[0] < n[3])
			ft_pb(ps);
		else if (n[0] > n[1] && n[1] < n[2] && n[1] < n[3])
		{
			ft_sa(ps->sa);
			ft_pb(ps);
		}
		else if (n[0] > n[2] && n[1] > n[2] && n[2] < n[3])
		{
			ft_ra(ps);
			ft_sa(ps->sa);
			ft_pb(ps);
		}
		else if (n[0] > n[3] && n[1] > n[3] && n[2] > n[3])
		{
			ft_rra(ps);
			ft_pb(ps);
		}
//	}
	if (ps->na == 3)
		ft_3args(ps, ps->sa);
	ft_pa(ps);
}
