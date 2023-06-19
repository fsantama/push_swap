/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:38:30 by fsantama          #+#    #+#             */
/*   Updated: 2023/06/19 13:41:21 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H 

# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <limits.h>

typedef struct	push_swap_list
{
	int	*sa;
	int	*sb;
	int	na;
	int	nb;
	int	nab;
}	ps_list;

int		main(int argc, char **argv);
int		ft_check_args(char **argv);
int		ft_check_num(char *str);
int		ft_check_limits(char *str);
long	ft_atoi_long(const char *str);
void	ft_free(ps_list *ps, int action);
int		start_stacl(ps_list *ps, int size);
int		char_to_int(ps_list *ps, int argc, char **argv);
int		ft_check_order(ps_list *ps, int size);
void	ft_free2(ps_list *ps);
int		ft_check_repeat_numbers(ps_list *ps);
int		ft_check_repeat(ps_list *ps, int n, int index);
#endif
