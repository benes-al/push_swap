/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:17:15 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/12 18:17:28 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_numbers(t_stack *stack_a)
{
	ra(stack_a);
}
 void	sort_three_numbers(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;
	
	first = stack_a->top->value;
	second = stack_a->top->next->value;
	third = stack_a->top->next->next->value;
	if (first > second && first > third)
		ra(stack_a);
	else if (second > first && second > third)
		rra(stack_a);
	first = stack_a->top->value;
	second = stack_a->top->next->value;
	if (first > second)
		sa(stack_a);
}
void	move_min_value_to_top(t_stack *stack_a)
{
	t_node	*current_node;
	int		min;
	int		index;
	int		index_min;
	
	current_node = stack_a->top;
	min = current_node->value;
	index = 0;
	while (current_node)
	{
		if (current_node->value < min)
		{
			min = current_node->value;
			index_min = index;
		}
		index++;
		current_node = current_node->next;
	}
	while (stack_a->top->value != min)
	{	
		if (index_min <= 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
}
void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b)
{
	move_min_value_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);	
}

void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b)
{
	move_min_value_to_top(stack_a);
	pb(stack_a, stack_b);
	move_min_value_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	if (stack_b->top->value < stack_b->top->next->value)
		rb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
