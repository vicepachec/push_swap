/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:47:16 by vpacheco          #+#    #+#             */
/*   Updated: 2023/03/08 16:02:31 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_list	*new_node(int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->index = -1;
	node->value = value;
	node->next = NULL;
	return (node);
}

void	insert(t_list *node, t_list **list)
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

int	ft_atoi2(char *str)
{
	long	signal;
	long	num;
	t_list	**a = NULL;

	signal = 1;
	num = 0;
	while (*str == ' ' || *str == '\t')
		str += 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal = -1;
		str += 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - 48) * signal;
		str += 1;
		if (num > INT_MAX || num < INT_MIN)
			exit_prog(1, a);
	}
	return (num);
}

int	is_ordered(t_list *a)
{
	if (!a)
		return (0);
	while (a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
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