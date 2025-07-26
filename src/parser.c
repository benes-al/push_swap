/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:06:45 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/26 18:11:57 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parser(int argc, char **argv, t_stack *stack_a)
{
	char	**tokens;
	int		i;
	int		nbr;
	
	tokens == NULL;
	i = 0;
	nbr = 0;
	if (argc == 1)
		ft_error();
	if (argc == 2)
	{
		tokens = ft_split(argv[1]);
		
		while (tokens[i])
		{
			if (!is_valid_number(token[i]))
				ft_error ();
			nbr = ft_atol(tokens[i]);
			if (!check_min_max(nbr))
				ft_error ();
			i++;
		}
	}
	if (argc > 2)
	{
		fill_stack((argc - 1), argv, stack_a);
	}
}	
