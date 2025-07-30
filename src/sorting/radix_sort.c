/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:27:49 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 18:13:02 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b, int max_bytes)
{
	t_node	*current_a;
	int	i;

	current_a = stack_a->top;
	i = 0;
	while (i <= max_bytes)
	{
		while (current_a)
		{
			if (current_a->index >> i == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			current_a = current_a->next;
		}
		while(stack_b->top)
			pa(stack_a, stack_b);
		i++;
	}
} 
