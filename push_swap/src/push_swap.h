/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:23:46 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/26 16:08:13 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

//libraries

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#include <stdio.h>

//structs

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;


//operations

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);


//radix helper functions

void	sort_index(t_stack *stack);
int		calculate_max_bytes(int max_index);


//sort up to five numbers

void	sort_two_numbers(t_stack *stack_a);
void	sort_three_numbers(t_stack *stack_a);
void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b);
void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b);

void	parser(int argc, char **argv, t_stack *stack_a);
bool	is_stack_sorted(t_stack *stack_a);
void	print_stack(t_stack stack);

//others

void 	free_stack(t_stack *stack);
char	**ft_split(char *s);
long	ft_atol(const char *token);
bool	check_duplicates(t_stack *stack_a);
int		calculate_max_bytes(int max_index);
bool	is_valid_number(const char *str);
void	ft_error (void);

#endif