/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:35:00 by vpacheco          #+#    #+#             */
/*   Updated: 2023/02/27 15:35:13 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ra(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	ft_printf("ra\n");
}

int	rb(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	ft_printf("rb\n");
}

int	rr(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	tmp = *b;
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	ft_printf("rr\n");
}
