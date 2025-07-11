/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:17:15 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/11 22:21:50 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_2_numbers(t_stack *stack_a)
{
	ra(stack_a);
}
 void	sorting_3_numbers(t_stack *stack_a)
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
	if (stack_a->top->value > stack_a->top->next->value)
		sa(stack_a);
}
void	sorting_4_numbers(t_stack *stack_a)
{
	
}
/*
void	sorting_5_numbers(t_stack *stack_a)
{
	
}*/