/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:56:55 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/12 18:30:35 by benes-al         ###   ########.fr       */
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
	
	parser (argc, argv, &stack_a);

	/* printf("Before operation stack_a:\n");
	print_stack(stack_a);
	printf("\nBefore operation stack_b:\n");
	print_stack(stack_b);
	printf("------------------------------\n");
	
	
	printf("\nAfter operation stack_a:\n");
	print_stack(stack_a);
	printf("\nAfter operation stack_b:\n");
	print_stack(stack_b);
	printf("------------------------------\n");
 */
	printf("%d\n", is_stack_sorted(&stack_a));

	return (0);
}
