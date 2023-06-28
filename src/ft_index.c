/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:09:21 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/26 11:55:25 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_index(ps_list *ps, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= size)
	{
		if (ps->sa[i] != ps->sc[j])
			j++;
		else
		{
			ps->sa[i] = j;
			i++;
			j = 0;
		}
	}
/*	i = 0;
	while (ps->sa[i])
	{
		printf("Valor de sa[%d] = %d\n", i, ps->sa[i]);
		i++;
	}*/
}
