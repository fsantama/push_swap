/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:24:35 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/13 14:01:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_args(char **argv)
{
	int	i;

	i = 0;
//	printf("Argumento nulo: %s", argv);
	while (argv[i])
	{
		if (ft_check_num(argv[i]) == 1)
			return (1);
		if (ft_check_limits(argv[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
