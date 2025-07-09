/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:56:55 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/09 20:01:09 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_to_stack(t_stack *stack, int value, int index)
{
	t_node *new_node = malloc(sizeof(t_node));
	if (!new_node)
		return;
	new_node->value = value;
	new_node->index = index;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
void	print_stack(t_stack stack)
{
	if(!stack.top)
	{
		write(1, "empty\n", 6);
		return ;
	}
	t_node *current = stack.top;
	printf("Stack (top to bottom):\n");
	while (current)
	{
		printf("Value: %d | Index: %d\n", current->value, current->index);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack stack_b;
	int		i;
	int		j;
	
	i = argc - 1;
	j = 0;
	stack_a.top = NULL;
	stack_a.size = 0;
	stack_b.top = NULL;
	stack_b.size = 0;	
	if (argc < 3)
	{
		printf("Please provide at least two numbers.\n");
		return (1);
	}

	while (i > 0)
	{
		add_node_to_stack(&stack_a, atoi(argv[i]), i - 1);
		i--;
	}
	
	printf("Before operation stack_a:\n");
	print_stack(stack_a);
	printf("\nBefore operation stack_b:\n");
	print_stack(stack_b);
	printf("------------------------------\n");
	
	reverse_rotate(&stack_a); 

	printf("\nAfter operation stack_a:\n");
	print_stack(stack_a);
	printf("------------------------------\n");

	return (0);
}
