/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:06:04 by stak              #+#    #+#             */
/*   Updated: 2024/04/04 11:49:16 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

t_list	*find_last(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

bool	stack_sorted(t_list *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_list	*lowest(t_list **stack)
{
	t_list	*current;
	t_list	*lowest;

	current = *stack;
	lowest = current->next;
	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	while (current != NULL)
	{
		if (current->content < lowest->content)
			lowest = current;
		current = current->next;
	}
	return (lowest);
}

t_list	*highest(t_list **stack)
{
	t_list	*current;
	t_list	*highest;

	current = *stack;
	highest = current->next;
	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	while (current != NULL)
	{
		if (current->content > highest->content)
			highest = current;
		current = current->next;
	}
	return (highest);
}