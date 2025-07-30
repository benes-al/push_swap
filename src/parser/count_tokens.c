/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_tokens.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:20:29 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 00:37:21 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_tokens(char **tokens)
{
	int	num_tokens;

	num_tokens = 0;
	while(tokens[num_tokens])
		num_tokens++;
	return (num_tokens);
}
	