/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:52:08 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/13 16:55:13 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		exit_prog(0, &a);
	parse_values(av, &a);
	if (is_ordered(a) == 0)
	{
		if (ft_lstsize(a) == 2)
			sa(&a);
		if (ft_lstsize(a) == 3)
			algo_3(&a);
		if (ft_lstsize(a) == 4)
			algo_4(&a, &b);
		if (ft_lstsize(a) == 5)
			algo_5(&a, &b);
	}
	exit_prog(0, &a);
}
