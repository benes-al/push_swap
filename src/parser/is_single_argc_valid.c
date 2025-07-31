/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_single_argc_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:10:23 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/31 16:21:25 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_single_argc_valid(char **argv, t_stack *stack_a)
{
	char	**tokens;
	int		num_tokens;

	tokens = NULL;
	num_tokens = 0;
	tokens = ft_split(argv[1]);
	if (!tokens[0] || !is_token_valid(tokens))
	{
		free_tokens(tokens);
		ft_error();
	}
	num_tokens = count_tokens(tokens);
	fill_stack(num_tokens, tokens, stack_a);
	free_tokens(tokens);
}
