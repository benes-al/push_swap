/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 21:12:10 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:33:38 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next_node;

	current = stack->top;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	stack->top = NULL;
	stack->size = 0;
}
