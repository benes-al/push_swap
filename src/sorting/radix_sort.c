/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:27:49 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 21:10:13 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	num_tokens;
	int	max_bites;
	
	i = 0;
	j = 0;
	num_tokens = stack_a->size;
	max_bites = calculate_max_bites(num_tokens - 1);
	sort_index(stack_a);
	while (i <= max_bites)
	{
		while (j < num_tokens)
		{
			if ((stack_a->top->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while(stack_b->top)
			pa(stack_a, stack_b);
		print_stack(stack_a);
		print_stack(stack_b);
		i++;
	}
} 
