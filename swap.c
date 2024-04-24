/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:16:20 by stak              #+#    #+#             */
/*   Updated: 2024/04/24 14:23:29 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	int	temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp;
	temp = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = temp;
}

void	sa(t_node **stack)
{
	swap(stack);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack)
{
	swap(stack);
	write(1, "sb\n", 3);
}

void	ss(t_node **a_stack, t_node **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	write(1, "ss\n", 3);
}
