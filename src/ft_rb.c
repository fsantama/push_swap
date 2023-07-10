/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:03:48 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/04 12:59:06 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rb(ps_list *ps)
{
	int	i;

	i = 0;
	while (i < ps->nb - 1)
	{
		ft_swap(&ps->sb[i], &ps->sb[i + 1]);
		i++;
	}
	ft_putstr_fd("rb\n", 1);
}