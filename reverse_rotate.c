/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:11:23 by stak              #+#    #+#             */
/*   Updated: 2024/04/05 17:33:19 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*last_a;
	t_list	*new_a;

	last_a = ft_lstlast(*a);
	new_a = *a;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (new_a->next != last_a)
		new_a = new_a->next;
	last_a->next = *a;
	*a = last_a;
	new_a->next = NULL;
	write (1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*last_b;
	t_list	*new_b;

	last_b = ft_lstlast(*b);
	new_b = *b;
	if (*b == NULL || (*b)->next == NULL)
		return ;
	while (new_b->next != last_b)
		new_b = new_b->next;
	last_b->next = *b;
	*b = last_b;
	new_b->next = NULL;
	write (1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*last_a;
	t_list	*new_a;
	t_list	*last_b;
	t_list	*new_b;

	last_a = ft_lstlast(*a);
	new_a = *a;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (new_a->next != last_a)
		new_a = new_a->next;
	last_a->next = *a;
	*a = last_a;
	new_a->next = NULL;
	write (1, "rra\n", 4);
	last_b = ft_lstlast(*b);
	new_b = *b;
	if (*b == NULL || (*b)->next == NULL)
		return ;
	while (new_b->next != last_b)
		new_b = new_b->next;
	last_b->next = *b;
	*b = last_b;
	new_b->next = NULL;
	write (1, "rra\n", 4);
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
// 	printf("%s\n", "before rotate a:");
// 	t_list *current_a = root_a;
// 	while (current_a != NULL)
// 	{
// 		printf("%ld\n", current_a->content);
// 		current_a = current_a->next;
// 	}
// 	printf("%s\n", "before rotate b:");
// 	t_list *current_b = root_b;
// 	while (current_b != NULL)
// 	{
// 		printf("%ld\n", current_b->content);
// 		current_b = current_b->next;
// 	}
// 	printf("%s\n", "after rotate_ra a:");
// 	reverse_rotate_rrr(&root_a, &root_b);
// 	t_list *current_a2 = root_a;
// 	while (current_a2 != NULL)
// 	{
// 		printf("%ld\n", current_a2->content);
// 		current_a2 = current_a2->next;
// 	}
// 	printf("%s\n", "after rotate_rb b:");
// 	// reverse_rotate_rrb(&root_b);
// 	t_list *current_b2 = root_b;
// 	while (current_b2 != NULL)
// 	{
// 		printf("%ld\n", current_b2->content);
// 		current_b2 = current_b2->next;
// 	}
// 	return (0);
// }