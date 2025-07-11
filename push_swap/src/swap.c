/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:30:48 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/11 18:48:27 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*temp;
	int		value_temp;
	int		index_temp;
	
	temp = stack->top;
	value_temp = temp->next->value;
	index_temp = temp->next->index;
	temp->next->value = temp->value;
	temp->next->index = temp->index;
	temp->value = value_temp;
	temp->index = index_temp;	
}

void	sa(t_stack *stack_a)
{
	if (stack_a && stack_a->size >= 2)
	{
		swap(stack_a);
		write (1, "sa\n", 3);
	}
	else
		return ;
}

void	sb(t_stack *stack_b)
{
	if (stack_b && stack_b->size >= 2)
	{
		swap(stack_b);
		write (1, "sb\n", 3);
	}
	else
		return ;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_a->size >= 2 && stack_b && stack_b->size >= 2)
	{	
		swap(stack_a);
		swap(stack_b);
		write (1, "ss\n", 3);
	}
	else
		return ;
}
