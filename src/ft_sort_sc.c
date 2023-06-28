/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_sc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:02:45 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/26 11:56:09 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_sc(ps_list *ps, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size - 1)
		{
			if (ps->sc[i] > ps->sc[i + 1])
			{
				ft_swap(&ps->sc[i], &ps->sc[i + 1]);
			}
			i++;
		}
		i = 0;
		j++;
	}
	i = 0;
/*	while (ps->sc[i])
	{
		printf("Valor de sc[%d] = %d\n", i, ps->sc[i]);
		i++;
	} */
}
