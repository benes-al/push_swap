/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:59:04 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/26 16:09:42 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.c"

#include <stdio.h>
#include <stdbool.h>

bool is_valid_number(const char *token)
{
	int	i;
	
	i = 0;
	if ((!token) || token[i] == '\0')
		return (0);
	if (token[i] == '-' || token[i] == '+')
		i++;
	if (token[i] == '\0')
		return (0);
	while (token[i])
	{
		if (!(token[i] >= '0' && token[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
