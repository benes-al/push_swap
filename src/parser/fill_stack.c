/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:27:32 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 00:47:34 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	
	i = argc - 1;
	while (i >= 0)
	{
		if (add_node_to_stack(stack_a, ft_atol(argv[i]), -1))
			i--;
		else
			free(stack_a);
	}	
}	
