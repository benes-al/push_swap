/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:15:34 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/29 17:32:41 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index(t_stack *stack)
{
 	t_node	*min;
 	t_node	*inner_loop;
 	t_node	*outer_loop;
	int		new_index;
	
	outer_loop = stack->top;
	new_index = 0;
	while (outer_loop)
 	{
		min = stack->top;
		while (min && min->index != -1)
			min = min->next;
		inner_loop = stack->top;
 		while (inner_loop)
 		{
 			if (inner_loop->index == -1 && (inner_loop->value < min->value))
 				min = inner_loop;
 			inner_loop = inner_loop->next;
 		}
		min->index = new_index; 
		new_index++;
		outer_loop = outer_loop->next;
	}
}
