/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:31:50 by stak              #+#    #+#             */
/*   Updated: 2024/04/04 11:43:01 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_list *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->new = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

// void	current_index(t_list *stack)
// {
// 	t_list	*current_b;
// 	t_list	*target_node;
// 	long	best_match_index;

// 	while (a)
// 	{
// 		best_match_index = LONG_MIN;
// 		current_b = b;
// 		while (current_b)
// 		{
// 			if (current_b->lst < a->lst
// 				&& current_b->lst > best_match_index)
// 			{
// 				best_match_index = current_b->lst;
// 				target_node = current_b;
// 			}
// 			current_b = current_b->next;
// 		}
// 		if (best_match_index == LONG_MIN)
// 			a->target_node = highest(b);
// 		else
// 			a->target_node = target_node;
// 		a = a->next;
// 	}
// }

static void	cost_analysis_a(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->content = a->new;
		if (!(a->above_median))
			a->content = len_a - (a->new);
		if (a->target_node->above_median)
			a->content += a->target_node->new;
		else
			a->content += len_b - (a->target_node->new);
		a = a->next;
	}
}

void	set_cheapest(t_list *stack)
{
	long	cheapest_value;
	t_list	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->content < cheapest_value)
		{
			cheapest_value = stack->content;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	init_nodes_a(t_list *a, t_list *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}
