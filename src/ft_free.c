/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:31:10 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/14 12:34:13 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free(ps_list *ps)
{
	if (ps->sa)
		free(ps->sa);
	if (ps->sb)
		free(ps->sb);
	if (d)
		free(d);
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
