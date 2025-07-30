/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:36:31 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parser(int argc, char **argv, t_stack *stack_a)
{
	char	**tokens;
	int		num_tokens;

	tokens = NULL;
	num_tokens = 0;
	if (argc == 2)
	{
		tokens = ft_split(argv[1]);
		if (!is_token_valid(tokens))
			ft_error();
		num_tokens = count_tokens(tokens);
		fill_stack(num_tokens, tokens, stack_a);
		free_tokens(tokens);
	}
	else
	{
		tokens = argv + 1;
		if (!is_token_valid(tokens))
			ft_error();
		fill_stack(argc - 1, argv + 1, stack_a);
		num_tokens = argc -1;
	}
	if (!check_duplicates(stack_a))
		ft_error();
}
