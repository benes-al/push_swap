/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/29 16:49:25 by benes-al         ###   ########.fr       */
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
		else
		{
			while(tokens[num_tokens])
				num_tokens++;
			fill_stack(num_tokens, tokens, stack_a);
			free(tokens);
		}
	}
	else
		fill_stack(argc, argv, stack_a);
}
