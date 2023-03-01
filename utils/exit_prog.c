/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:14:24 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/01 15:17:45 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	exit_prog(int i, t_list **a)
{
	if (i)
		ft_printf("Error\n");
	free_list(a);
	exit(i);
}

void	free_list(t_list **a)
{
	t_list	*tmp;

	while (a)
	{
		tmp = *a;
		*a = (*a)->next;
		free (tmp);
	}
}
