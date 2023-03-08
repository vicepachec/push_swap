/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:08:01 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/08 17:08:02 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/includes/ft_printf.h"
# include <stdlib.h>
# include <limits.h>

void		exit_prog(int i, t_list **a);
void		free_list(t_list **a);
int			ft_atoi2(char *str);
void		parse_values(char **av, t_list **a);
int			is_ordered(t_list *a);
int			sa(t_list **a);
int			ra(t_list **a);
void		max_min(t_list *a, int *min, int *max);

#endif