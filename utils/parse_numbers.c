/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:02:20 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/01 18:32:05 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	is_nbr(char *s, t_list **a)
{
	while (*s == ' ' || (*s > 8 && *s < 14))
		s++;
	if (*s == '+' || *s == '-')
		s++;
	if (*s < '0' || *s > '9')
		exit_prog(1, a);
	while (*s >= '0' && *s <= '9')
		s++;
	if (*s != ' ' && (*s <= 8 || *s >= 14) && *s)
		exit_prog(1, a);
}

void	parse_values(char **av, t_list **a)
{
	int		i;
	char	*s;
	int		num;

	i = 0;
	(void)a;
	while(av[++i])
	{
		s = av[i];
		if(s)	
		{
			num	= ft_atoi2(s);
			ft_printf("%i\n", num);
		}
	}
}