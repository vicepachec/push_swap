/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:23:26 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/12 16:05:47 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp_last;

	tmp_last = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(a, tmp_last);
	(*a) = tmp_last;
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*tmp_last;

	tmp_last = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(b, tmp_last);
	(*b) = tmp_last;
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp_last;

	tmp_last = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(a, tmp_last);
	(*a) = tmp_last;
	tmp_last = ft_lstlast(*b);
	tmp = (*b);
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(b, tmp_last);
	(*b) = tmp_last;
	ft_printf("rrr\n");
}
