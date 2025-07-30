/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:56:55 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:12:04 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack stack_b;

	stack_a.top = NULL;
	stack_a.size = 0;
	stack_b.top = NULL;
	stack_b.size = 0;
	
	if (argc == 1)
		return (0);
	parser (argc, argv, &stack_a);
	if (is_stack_sorted(&stack_a))
		exit (0);
	sort_tokens(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
	
}
