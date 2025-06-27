/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:30:48 by benes-al          #+#    #+#             */
/*   Updated: 2025/06/27 21:49:31 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*temp;
	int		value_temp;
	int		index_temp;
	
	if (stack->size < 2)
				return ;
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
	write (1, "sa\n", 3);
	swap(stack_a);
}

void	sb(t_stack *stack_b)
{
	write (1, "sb\n", 3);
	swap(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	write (1, "ss\n", 3);
	swap(stack_a);
	swap(stack_b);
}
