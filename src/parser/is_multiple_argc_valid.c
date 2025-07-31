/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_multiple_argc_valid.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:10:27 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/31 16:34:37 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_multiple_argc_valid(int argc, char **argv, t_stack *stack_a)
{
	if (!is_token_valid(argv + 1))
		ft_error();
	fill_stack(argc - 1, argv + 1, stack_a);
}
