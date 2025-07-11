/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:16:19 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/10 14:58:29 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	t_stack	temp;
	int		node;
	
	node = 1;
	temp.top = stack->top;
	temp.size = stack->size; 
	while (node < (stack->size) - 1)
	{
		temp.top = temp.top->next;
		node++;
	}
	temp.top->next->next = stack->top;
	stack->top = temp.top->next;
	temp.top->next = NULL;
}

void	rra(t_stack *stack_a)
{
	if (!stack_a && stack_a->size >= 2)
	{
		reverse_rotate(stack_a);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack *stack_b)
{
	if (!stack_b && stack_b->size >= 2)
	{
		reverse_rotate(stack_b);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a && stack_a->size >= 2 && !stack_b && stack_b->size >= 2)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		write(1, "rrr\n", 4);
	}
}
