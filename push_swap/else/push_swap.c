/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:25:18 by benes-al          #+#    #+#             */
/*   Updated: 2025/06/26 17:16:57 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack a;
	t_stack b;
	int		i;

	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	i = 0;
	if (argc < 2 || argv[1][0] == '\0')
		return (1);
	if (argc == 2)
	{
		t_node *first;
		first = new_node(atoi(argv[1]), i);
		a.top = first;
		a.size = i + 1;
		printf("first node value: %d\n", a.top->value);
		printf("node index: %d\n", a.top->index);
		printf("stack size: %d\n", a.size);
		
		char **arr;
		int i;
		int size_list;

		size_list = ft_wrdcnt(argv[1], ' ');
		arr = ft_split(argv[1], ' ');
		i = 0;
		if (argv[1])
		
		while (i < size_list)
		{
			printf("%s", arr[i]);
			i++;
			if(i < size_list)
				printf(", ");
		}
	}
	if (argc > 2)
	{
		int	i;
		int	j;
		
		i = 1;
		j = 0;
		while (argv[j])
			j++;
		while (argv[i])
		{
			printf("%s", argv[i]);
			i++;
			if (i < j)
				printf(", ");
		}
	} 
	printf("\n");
}
