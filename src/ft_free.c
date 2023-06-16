/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:31:10 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/14 18:36:42 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Para evitar errores de memoria, necesitamos, además de hacer free, asignar
// a los punteros, el nulo
void	ft_free2(ps_list *ps)
{
	if (ps->sa)
	{
		free(ps->sa);
		ps->sa = 0;
	}
	if (ps->sb)
	{
		free(ps->sb);
		ps->sb = 0;
	}
	if (ps)
	{
		free(ps);
		ps = 0;
	}
	exit(0);
}

void	ft_free(ps_list *ps, int action)
{
	if (action == 0)
	{
		if (ps->sa)
			free(ps->sa);
		if (ps->sb)
			free(ps->sb);
		if (ps)
			free(ps);
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	if (action == 1)
		ft_free2(ps);
}
