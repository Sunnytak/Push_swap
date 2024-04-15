/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:15:56 by stak              #+#    #+#             */
/*   Updated: 2024/04/15 12:15:57 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_node **stack)
{
	t_node	*temp;

	if (!(*stack) || !(*stack)->next)
		return ;
	temp = ft_lstlast(*stack);
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = (*stack)->prev;
}

void	rra(t_node **stack)
{
	reverse(stack);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack)
{
	reverse(stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a_stack, t_node **b_stack)
{
	reverse(a_stack);
	reverse(b_stack);
	write(1, "rrr\n", 4);
}
