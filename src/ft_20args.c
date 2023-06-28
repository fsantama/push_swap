/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_20args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:14:08 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/27 13:55:26 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_20args(ps_list *ps)
{
	
}

void	ft_20args(ps_list *ps)
{
	int	i;
	int	j;

	i = 0;
	j = ps->lsc;
	while (ps->nb <= ps->(size / 2))
	{
		if (ps->sa[0] == i)
		{
			pb(ps);
			i--;
		}
		else
			ra(ps);
	}
	ft_20args_sb(ps);
}
