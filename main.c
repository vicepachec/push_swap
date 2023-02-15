/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpacheco <vpacheco@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:52:08 by vpacheco          #+#    #+#             */
/*   Updated: 2023/02/06 18:52:48 by vpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/push_swap.h"

t_list	*new_node(int value)
{
	t_list *node;
	
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
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

int ft_atoi(char **str)
{
	long	signal;
	long	num;

	signal = -1;
	num = 0;
	while(**str == ' ' || **str == '\t')
		*str += 1;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			signal = -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		num = num * 10 + (**str - 48) * signal;
		*str += 1;
	}
	return (num);
}
