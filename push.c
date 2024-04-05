/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:02:03 by stak              #+#    #+#             */
/*   Updated: 2024/04/04 14:38:25 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*first_b;

	first_b = *b;
	if (*b != NULL)
	{
		*b = (*b)->next;
		first_b->next = *a;
		*a = first_b;
		write (1, "pa\n", 3);
	}
}

void	pb(t_list **a, t_list **b)
{
	t_list	*first_a;

	first_a = *a;
	if (*a != NULL)
	{
		*a = (*a)->next;
		first_a->next = *b;
		*b = first_a;
		write (1, "pb\n", 3);
	}
}


// int    main(void)
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
// 	printf("%s\n", "before push a:");
// 	t_list *current_a = root_a;
// 	while (current_a != NULL)
// 	{
// 		printf("%ld\n", current_a->content);
// 		current_a = current_a->next;
// 	}
// 	printf("%s\n", "before push b:");
// 	t_list *current_b = root_b;
// 	while (current_b != NULL)
// 	{
// 		printf("%ld\n", current_b->content);
// 		current_b = current_b->next;
// 	}
// 	printf("%s\n", "after push_pa a:");
// 	push_pb(&root_a, &root_b);
// 	t_list *current_a2 = root_a;
// 	while (current_a2 != NULL)
// 	{
// 		printf("%ld\n", current_a2->content);
// 		current_a2 = current_a2->next;
// 	}
// 	printf("%s\n", "after push_pb b:");
// 	// push_pb(&root_a, &root_b);
// 	t_list *current_b2 = root_b;
// 	while (current_b2 != NULL)
// 	{
// 		printf("%ld\n", current_b2->content);
// 		current_b2 = current_b2->next;
// 	}
// 	return (0);
// }
