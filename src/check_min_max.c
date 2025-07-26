/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:17:03 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/26 13:56:58 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_min_max(long token)
{
	if (token < INT_MIN || token > INT_MAX)
		return (0);
	return (1);
}
