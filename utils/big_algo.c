/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:51:25 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 18:07:02 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static int	max_index(t_list *a, int max)
{	
	max = INT_MIN;
	while (a)
	{
		if (max < (a)->index)
			max = (a)->index;
		a = (a)->next;
	}
	return (max);
}

int	find_max_bits(t_list **a)
{
	int		i;
	int		max;

	max = 0;
	max = max_index((*a), max);
	i = 0;
	while (max != 0 && ++i)
		max = (max >> 1);
	return (i);
}

void	number_index(t_list **a)
{
	int		min;
	t_list	*tmp;
	int		i;

	i = -1;
	while (++i < ft_lstsize(*a))
	{
		min = INT_MAX;
		tmp = *a;
		while (tmp)
		{
			if (min > tmp->value && tmp->index == -1)
				min = tmp->value;
			tmp = tmp->next;
		}
		tmp = *a;
		while (min != tmp->value)
			tmp = tmp->next;
		tmp->index = i;
	}
}

void	radix_sort(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;
	int		max_bits;
	int		len;
	int		j;

	len = ft_lstsize(*a);
	i = -1;
	number_index(a);
	max_bits = find_max_bits(a);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			tmp = *a;
			if (tmp->index >> i & 1)
				ra(a);
			else
				pb(b, a);
		}
		while (*b)
			pa(a, b);
	}
}
