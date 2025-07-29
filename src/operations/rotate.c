/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 22:03:42 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/12 15:05:53 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_stack	temp;
	int		node;
	
	node = 1;
	temp.top = stack->top;
	temp.size = stack->size;
	while (node < stack->size)
	{
		temp.top = temp.top->next;
		node++;
	}
	temp.top->next = stack->top;
	stack->top = stack->top->next;
	temp.top = temp.top->next;
	temp.top->next = NULL;
}

void	ra(t_stack *stack_a)
{
	if (stack_a && stack_a->size >= 2)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack *stack_b)
{
	if (stack_b && stack_b->size >= 2)
	{
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_a->size >= 2 && stack_b && stack_b->size >= 2)
	{
		rotate(stack_a);
		rotate(stack_b);
		write(1, "rr\n", 3);
	}
}
