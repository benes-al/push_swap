/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:19:14 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/26 13:53:35 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *token)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((token[i] >= 9 && token[i] <= 13) || token[i] == ' ')
		i++;
	if (token[i] == '-' || token[i] == '+')
	{
		if (token[i] == '-')
			sign = -sign;
		i++;
	}
	while (token[i] >= '0' && token[i] <= '9')
	{
		nbr = (nbr * 10) + (token[i] - '0');
		i++;
	}
	return (nbr * sign);
}
