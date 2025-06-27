/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_creat_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 20:00:23 by benes-al          #+#    #+#             */
/*   Updated: 2025/06/20 20:56:55 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_node	*new_node(int number, int i)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
	{
		ft_printf("Memory allocation failed\n");
		return (1);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->index = i; 
	new_node->value = number;
	return (new_node);
}
