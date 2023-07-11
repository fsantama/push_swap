/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:45:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/07/11 17:26:44 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	choose_args(int argc, ps_list *ps)
{
	if (ft_check_order(ps, argc) == 1)
		return (1);
	else
	{
		if (argc == 2)
			ft_2args(ps->sa);
		if (argc == 3)
			ft_3args(ps, ps->sa);
		if (argc == 4)
			ft_4args(ps, ps->sa);
		if (argc == 5)
			ft_5args(ps, ps->sa);
		if (argc > 5 && argc < 101)
			ft_100args(ps, argc);
		if (argc > 100)
			ft_500args(ps, argc);
	}
	return (0);
}

int	char_to_int(ps_list *ps, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ps->sa[i] = ft_atoi_long(argv[i]);
		ps->sc[i] = ft_atoi_long(argv[i]);
		i++;
	}
	return (0);
}

int	start_stack(ps_list *ps, int size)
{
	ps->sa = malloc(sizeof(int) * size);
	if (!ps->sa)
	{
		free(ps);
		return (1);
	}
	ps->sc = malloc(sizeof(int) * size);
	if (!ps->sc)
	{
		free(ps);
		return (1);
	}
	ps->sb = malloc(sizeof(int) * size);
	if (!ps->sb)
	{
		free(ps->sa);
		free(ps->sc);
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

//	atexit(leaks);
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
		if (ft_check_repeat_numbers(ps) == 1)
			ft_free(ps, 0);
		if (choose_args(argc - 1, ps) == 1)
			ft_free(ps, 1);
	}
	ft_free(ps, 1);
	return (0);
}
