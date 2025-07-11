/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indice_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:15:34 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/11 14:20:26 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indice_sort(t_stack *stack)
{
 	t_node	*min;
 	t_node	*current;
 	int		current_node;
	int		total_nodes;
 	int		current_index;
	
 	current_index = 0;
 	total_nodes = stack->size;
	while (current_index < total_nodes)
 	{
		min = stack->top;
		while (min->index != -1)
			min = min->next;
		current = stack->top;
 		current_node = 1;
 		while (current_node <= total_nodes)
 		{
 			if ((current->value < min->value) && current->index == -1)
 				min = current;
 			current = current->next;
 			current_node++;
 		}
		min->index = current_index; 
		current_index++;
	}
}
