/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/12 18:12:53 by benes-al         ###   ########.fr       */
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

bool	verify_argc_number(int argc)
{

	if (argc < 3)
	{
		printf("Please provide at least two numbers.\n");
		exit (1);
	}
	return (1);
}

void	fill_stack(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	
	i = argc - 1;
	while (i > 0)
	{
		add_node_to_stack(stack_a, atoi(argv[i]), -1);
		i--;
	}
}

void	parser(int argc, char **argv, t_stack *stack_a)
{
	if (verify_argc_number(argc))
		fill_stack(argc, argv, stack_a);
}