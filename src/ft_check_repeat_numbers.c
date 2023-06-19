/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:00:46 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/19 13:37:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_repeat(ps_list *ps, int n, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (ps->sa[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_repeat_numbers(ps_list *ps)
{
	int	i;

	i = 0;
	while(i < ps->na)
	{
		if (ft_check_repeat(ps, ps->sa[i], i) == 0)
			i++;
		else
		{
			return (1);
		}
	}
	return (0);
}
