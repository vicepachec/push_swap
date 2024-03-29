/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:37:58 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 14:23:03 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!b)
		return ;
	tmp2 = (*a);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	(*a)->next = tmp2;
	(*b) = tmp;
	ft_printf("pa\n");
}

void	pb(t_list **b, t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!a)
		return ;
	tmp2 = (*b);
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	(*b)->next = tmp2;
	(*a) = tmp;
	ft_printf("pb\n");
}
