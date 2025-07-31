/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:33:06 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/31 10:38:40 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *from_stack, t_stack *to_stack)
{
	t_stack	temp;

	temp.top = 0;
	temp.size = 0;
	if (to_stack->size == 0)
	{
		to_stack->top = from_stack->top;
		from_stack->top = from_stack->top->next;
		to_stack->top->next = NULL;
	}
	else
	{
		temp.top = to_stack->top;
		temp.size = 1;
		to_stack->top = from_stack->top;
		from_stack->top = from_stack->top->next;
		to_stack->top->next = temp.top;
	}
	from_stack->size--;
	to_stack->size++;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b && stack_b->size > 0)
	{
		push(stack_b, stack_a);
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_a->size > 0)
	{
		push(stack_a, stack_b);
		write(1, "pb\n", 3);
	}
}
