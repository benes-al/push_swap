/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:26:55 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:23:42 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	add_node_to_stack(t_stack *stack, int value, int index)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->index = index;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	return (1);
}
