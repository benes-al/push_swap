/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:23:46 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/30 22:15:53 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/******************************************************************************/
/*                              INCLUDES                                      */
/******************************************************************************/

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

/******************************************************************************/
/*                               STRUCTS                                      */
/******************************************************************************/

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

/******************************************************************************/
/*                              OPERATIONS                                    */
/******************************************************************************/

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

/******************************************************************************/
/*                               SORTING                                      */
/******************************************************************************/

void	sort_two_numbers(t_stack *stack_a);
void	sort_three_numbers(t_stack *stack_a);
void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b);
void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b);
void	sort_index(t_stack *stack);
int		calculate_max_bites(int max_index);
bool	is_stack_sorted(t_stack *stack_a);
void	sort_tokens(t_stack *stack_a, t_stack *stack_b);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/

void	parser(int argc, char **argv, t_stack *stack_a);
bool	is_valid_number(const char *token);
bool	check_min_max(long nbr);
bool	is_token_valid(char **tokens);
int		count_tokens(char **tokens);
bool	add_node_to_stack(t_stack *stack, int value, int index);
void	fill_stack(int argc, char **argv, t_stack *stack_a);
bool	check_duplicates(t_stack *stack_a);

/******************************************************************************/
/*                               UTILS                                        */
/******************************************************************************/

char	**ft_split(char *s);
long	ft_atol(const char *token);
void	ft_error(void);
void 	free_stack(t_stack *stack);
void	free_tokens(char **tokens);

#endif