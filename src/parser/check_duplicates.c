/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:51:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 01:00:27 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_duplicates(t_stack *stack_a)
{
	t_node	*current;
	t_node	*checker;

	current = stack_a->top;
	while (current->next)
	{
		checker = current->next;
		while (checker)
		{
			if (current->value == checker->value)
				return (0);
			checker = checker->next;
		}
		current = current->next;
	}
	return (1);
}
