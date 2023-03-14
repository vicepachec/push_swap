/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:35:00 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 16:36:02 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	(*a)->next = NULL;
	*a = tmp;
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	(*b)->next = NULL;
	*b = tmp;
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	(*a)->next = NULL;
	*a = tmp;
	tmp = (*b)->next;
	ft_lstadd_back(b, *b);
	(*b)->next = NULL;
	*b = tmp;
	ft_printf("rr\n");
}
