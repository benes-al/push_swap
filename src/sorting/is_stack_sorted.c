/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:01:38 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:33:58 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_stack_sorted(t_stack *stack_a)
{
	t_node	*current_node;

	current_node = stack_a->top;
	while (current_node->next)
	{
		if (current_node->value > current_node->next->value)
			return (0);
		current_node = current_node->next;
	}
	return (1);
}
