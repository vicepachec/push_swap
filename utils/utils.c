/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:47:16 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/12 17:44:12 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	insert(t_list **head, int value)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return ;
	temp->value = value;
	temp->next = NULL;
	temp->index = -1;
	ft_lstadd_back(head, temp);
}


void	node(t_list *node, t_list **list)
{
	t_list *temp;

	if (node == NULL)
		return ;
	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

int	ft_atoi2(char **str, t_list **a)
{
	long long	num;
	int			conv;

	num = 0;
	conv = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			conv *= -1;
		*str += 1;
	}
	while (**str >= '0' && *(*str) <= '9')
	{
		num = (num * 10 + (conv * (**str - '0')));
		if (num > INT_MAX || num < INT_MIN)
			exit_prog(1, a);
		*str += 1;
	}
	while (**str == ' ' || (**str > 8 && **str < 14))
		*str += 1;
	if (**str && (**str > 8 && **str < 14) && (**str != ' '))
		exit_prog(1, a);
	return (num);
}

int	is_ordered(t_list *a)
{
	if (a)
	{
		while (a->next != NULL && (a))
		{
			if (a->value > a->next->value)
				return (0);
			a = a->next;
		}
	}
	return (1);
}

void	max_min(t_list *a, int *min, int *max)
{
	while(a)
	{
		if (a->value < *min)
			*min = a->value;
		if (a->value > *max)
			*max = a->value;
		a = a->next;
	}
}