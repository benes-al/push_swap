/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_token_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:50:09 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:36:56 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_token_valid(char **tokens)
{
	int		i;
	long	num;

	i = 0;
	num = 0;
	while (tokens[i])
	{
		if (!is_valid_number(tokens[i]))
			return (0);
		num = ft_atol(tokens[i]);
		if (!check_min_max(num))
			return (0);
		i++;
	}
	return (1);
}
