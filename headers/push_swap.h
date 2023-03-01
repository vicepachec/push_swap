/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:29:32 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/01 18:21:05 by vpacheco         ###   ########.fr       */
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

#endif