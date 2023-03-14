/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:44:13 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 18:07:58 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/includes/ft_printf.h"
# include <stdlib.h>
# include <limits.h>

void		exit_prog(int i, t_list **a);
void		free_list(t_list **a);
int			ft_atoi2(char **str, t_list **a);
void		parse_values(char **av, t_list **a);
int			is_ordered(t_list *a);
void		sa(t_list **a);
void		ra(t_list **a);
void		rra(t_list **a);
void		pa(t_list **a, t_list **b);
void		pb(t_list **b, t_list **a);
void		max_min(t_list *a, int *min, int *max);
void		algo_3(t_list **a);
void		insert(t_list **head, int item);
t_list		*new_node(int value);
void		algo_4(t_list **a, t_list **b);
void		algo_5(t_list **a, t_list **b);
void		print_list(t_list *a);
int			find_max_bits(t_list **a);
void		number_index(t_list **a);
void		radix_sort(t_list **a, t_list **b);
int			is_dup(t_list *a);
#endif