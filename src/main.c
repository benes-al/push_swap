/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:56:55 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/29 18:46:42 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#if 1
# include <stdio.h>
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
#endif

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack stack_b;
	
	stack_a.top = NULL;
	stack_a.size = 0;
	stack_b.top = NULL;
	stack_b.size = 0;
	
	/* if (argc == 1)
		return (0);
	else
		parser (argc, argv, &stack_a);
	 */
	#if 1
	fill_stack(argc, argv, &stack_a);
	
	printf("Before operation stack_a:\n");
	print_stack(stack_a);
	printf("\nBefore operation stack_b:\n");
	print_stack(stack_b);
	printf("------------------------------\n");

	sort_index(&stack_a);
	

	printf("\nAfter operation stack_a:\n");
	print_stack(stack_a);
	printf("\nAfter operation stack_b:\n");
	print_stack(stack_b);
	printf("------------------------------\n");
	
	#endif
	
	free_stack(&stack_a);
	return (0);
	
}
