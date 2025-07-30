/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tokens.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:20:32 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 17:23:36 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tokens(t_stack *stack_a, t_stack *stack_b, int num_tokens)
{
	if (num_tokens == 2)
		sort_two_numbers(stack_a);
	if (num_tokens == 3)
		sort_three_numbers(stack_a);
	if (num_tokens == 4)
		sort_four_numbers(stack_a, stack_b);
	if (num_tokens == 5)
		sort_five_numbers(stack_a, stack_b);
}
