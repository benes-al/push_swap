/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:45:43 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/24 17:24:01 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack stack)
{
	t_node *current;
	
	current = stack.top;
	if(!stack.top)
	{
		write(1, "empty\n", 6);
		return ;
	}
	printf("Stack (top to bottom):\n");
	while (current)
	{
		printf("Value: %d | Index: %d\n", current->value, current->index);
		current = current->next;
	}
}
