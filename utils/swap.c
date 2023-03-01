/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:35:49 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/01 18:11:24 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	sa(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	if ((*a))
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	ft_printf("sa\n");
}

int	sb(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	if ((*b))
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_printf("sb\n");
}

int	ss(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	if ((*a))
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	if ((*b))
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_printf("ss\n");
}
