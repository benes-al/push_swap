/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_max_bites.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:39:50 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 18:49:50 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_max_bites(int max_index)
{
	int	i;

	i = 0;
	while ((max_index >> i) != 0)
		i++;
	return (i);
}
