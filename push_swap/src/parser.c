/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/24 21:12:17 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	add_node_to_stack(t_stack *stack, int value, int index)
{
	t_node *new_node;
	
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

bool	verify_argc_number(int argc)
{ 
	if (argc < 2)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	return (1);
}

void	fill_stack(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	
	i = argc;
	while (i > 0)
	{
		if (add_node_to_stack(stack_a, atoi(argv[i]), -1))
			i--;
		else
			free(stack_a);
	}
}

char **tolkenization(char **argv)
{
	char	**tokens;
	int		i;
	int		j;
	
	tokens = ft_split(argv[1]);
	i = 0;
	j = 0;
	while (tokens[i])
		i++;
	if (i < 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (j < i)
	{
		printf("%i\n", atoi(tokens[j]));
		j++;
	}
	return (ft_split(argv[1]));
}

void	parser(int argc, char **argv, t_stack *stack_a)
{
	if(verify_argc_number(argc) && argc == 2)
	{
		tolkenization(argv);
	}
	if (verify_argc_number(argc) && argc > 2)
		fill_stack((argc - 1), argv, stack_a);
}
