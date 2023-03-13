/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:48:47 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/13 16:56:28 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	algo_3(t_list **a)
{
	int min;
	int max;

	min = INT_MAX;
	max = INT_MIN;
	max_min(*a, &min, &max);
	if ((*a)->value == max)
		ra(a);
	if ((*a)->next->value == max)
		rra(a);
	if ((*a)->next->value == min)
		sa(a);
}

void 	algo_4(t_list **a, t_list **b)
{
	int min;
	int max;

	min = INT_MAX;
	max = INT_MIN;
	max_min(*a, &min, &max);
	if (!is_ordered(*a))
	{
		while ((*a)->value != min && (*a)->value != max)
			ra(a);
		pb(a, b);
		algo_3(a);
		pa(a, b);
		if ((*a)->value == max)
			ra(a);
	}
}

void	algo_5(t_list **a, t_list **b)
{
	int min;
	int max;

	min = INT_MAX;
	max = INT_MIN;	// print_list(a);
	max_min(*a, &min, &max);
	if (!is_ordered(*a))
	{
		while ((*a)->value != min && (*a)->value != max)
			ra(a);
		pb(a, b);
		algo_4(a, b);
		pa(a, b);
		if ((*a)->value == max)
			ra(a);
	}
}

void	big_algo(t_list **a, t_list **b)
{
	
}