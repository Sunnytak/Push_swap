/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:26:16 by stak              #+#    #+#             */
/*   Updated: 2024/04/04 14:39:08 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*first_a;
	t_list	*second_a;
	int		temp;

	first_a = *a;
	second_a = (*a)->next;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = first_a->content;
	first_a->content = second_a->content;
	second_a->content = temp;
	write (1, "sa\n", 3);
}

void	sb(t_list **b)
{
	t_list	*first_b;
	t_list	*second_b;
	int		temp;

	first_b = *b;
	second_b = (*b)->next;
	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = first_b->content;
	first_b->content = second_b->content;
	second_b->content = temp;
	write (1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*second_a;
	t_list	*second_b;
	int		temp_a;
	int		temp_b;

	second_a = (*a)->next;
	second_b = (*b)->next;
	if (*a == NULL || (*a)->next == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	temp_a = (*a)->content;
	(*a)->content = second_a->content;
	second_a->content = temp_a;
	temp_b = (*b)->content;
	(*b)->content = second_b->content;
	second_b->content = temp_b;
	write (1, "ss\n", 3);
}

// int main(void)
// {
// 	int i;
// 	int j;
// 	i = 0;
// 	j = 5;

// 	t_list *root_a = NULL;
// 	t_list *root_b = NULL;

// 	while (i < 5)
// 	{
// 		t_list *stack_a = malloc(sizeof(t_list));
// 		if (!stack_a)
// 			return (0);
// 		stack_a->content = i;
// 		stack_a->next = NULL;
// 		ft_lstadd_back(&root_a, stack_a);
// 		i++;
// 	}
// 	while (j < 10)
// 	{
// 		t_list *stack_b = malloc(sizeof(t_list));
// 		if (!stack_b)
// 			return (0);
// 		stack_b->content = j;
// 		stack_b->next = NULL;
// 		ft_lstadd_back(&root_b, stack_b);
// 		j++;
// 	}
// 	printf("%s\n", "before swap_ab a:");
// 	t_list *current_a = root_a;
// 	while (current_a != NULL)
// 	{
// 		printf("%ld\n", current_a->content);
// 		current_a = current_a->next;
// 	}
// 	printf("%s\n", "before swap_ab b:");
// 	t_list *current_b = root_b;
// 	while (current_b != NULL)
// 	{
// 		printf("%ld\n", current_b->content);
// 		current_b = current_b->next;
// 	}
// 	printf("%s\n", "after swap_ab a:");
// 	swap_ss(&root_a, &root_b);
// 	t_list *current_a2 = root_a;
// 	while (current_a2 != NULL)
// 	{
// 		printf("%ld\n", current_a2->content);
// 		current_a2 = current_a2->next;
// 	}
// 	printf("%s\n", "after swap_ab b:");
// 	// swap_ss(&root_a, &root_b);
// 	t_list *current_b2 = root_b;
// 	while (current_b2 != NULL)
// 	{
// 		printf("%ld\n", current_b2->content);
// 		current_b2 = current_b2->next;
// 	}
// 	return (0);
// }
