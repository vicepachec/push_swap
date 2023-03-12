/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:02:20 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/12 17:37:08 by vpacheco         ###   ########.fr       */
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
	long	num;
	char	*str;

	i = 0;
	while (av[++i] && av)
	{
		str = av[i];
		if (!*str)
			exit_prog(1, a);
		while (*str)
		{
			while (*str == ' ')
				str++;
			is_nbr(str, a);
			num = ft_atoi2(&str, a);
			insert(a, num);
		}
	}
}