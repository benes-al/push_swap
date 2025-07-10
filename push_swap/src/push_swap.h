/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:23:46 by benes-al          #+#    #+#             */
/*   Updated: 2025/07/10 11:31:27 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

//libraries

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

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

//libft

char	**ft_split(char *s, char c);
int		ft_wrdcnt(char *str, char sep);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
int		ft_printf(const char *format, ...);

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

#endif