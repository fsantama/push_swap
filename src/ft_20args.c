/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_20args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:14:08 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/05 16:37:17 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa_20args(ps_list *ps, int i)
{
	while (i >= 0)
	{
		if (ps->sa[0] == i)
		{
			ft_pb(ps);
			i--;
		}
		else
			ft_ra(ps);
	}	
	sb_20args(ps);
}

void	sb_20args(ps_list *ps)
{
	while(ps->nb > 0)
	{
		if (ps->sb[0] == ps->lsc -1)
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
			ft_rb(ps);
	}
}

void	ft_20args(ps_list *ps)
{
	int	i;

	i = ps->lsc;
	while (ps->nb <= (ps->size / 2))
	{
		if (ps->sa[0] == i)
		{
			ft_pb(ps);
			i--;
		}
		else
			ft_ra(ps);
	}
	sb_20args(ps);
	sa_20args(ps, i);
}
