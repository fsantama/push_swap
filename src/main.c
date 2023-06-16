/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:45:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/16 15:09:17 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Seleccionamos la catidad de argumentos que recibe el programa, en función
// de estos, ordenamos de una manera u otra
int	choose_args(int argc, ps_list *ps)
{
	(void) argc;

	if (ft_check_repeat_numbers(ps) == 1)
		return (1);
	
	else
		/*
	{
		if (argc == 2)
			ft_2args
*/
		return (0);
}
// Pasamos los argumentos de tipo char a int
int	char_to_int(ps_list *ps, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ps->sa[i] = ft_atoi_long(argv[i]);
		printf(" valor de sa[%d] = %d", i, ps->sa[i]);
		i++;
	}
	return (0);
}

// Reservamos memoria para utilizarlas en la siguiente función
int	start_stack(ps_list *ps, int size)
{
	ps->sa = malloc(sizeof(int) * size);
	if (!ps->sa)
	{
		free(ps);
		return (1);
	}
	ps->sb = malloc(sizeof(int) * size);
	if (!ps->sb)
	{
		free(ps->sa);
		free(ps);
		return (1);
	}
	ps->na = size;
	ps->nb = 0;
//	ps-> nab = size;
	return (0);
}

void	leaks(void)
{
	system("leaks -q push_swap");
}

int	main(int argc, char **argv)
{
	ps_list	*ps;

	atexit(leaks);
	ps = malloc(sizeof(ps_list));
	if (!ps)
		return (0);
	if (argc > 1)
	{
		if (ft_check_args(++argv) == 1)
		{
			ft_free(ps, 0);
			return (1);
		}
		if (start_stack(ps, argc - 1) == 1)
			ft_free(ps, 0);
		if (char_to_int(ps, argc - 1, argv) == 1)
			ft_free(ps, 0);
		if (ft_check_order(ps, argc - 1) == 1)
			ft_free(ps, 1);
		if (choose_args(argc - 1, ps) == 1)
			ft_free(ps, 0);
	}
	ft_free(ps, 1);
	return (0);
}
