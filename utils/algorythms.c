/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:48:47 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/08 16:06:32 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	algo_3(t_list **a)
{
	int min;
	int max;

	min = INT_MAX;
	max = INT_MIN;
	max_min(*a, &min, &max);
	if ((*a)->value == max)
		ra(a);
}