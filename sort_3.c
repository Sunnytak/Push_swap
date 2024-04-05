/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:57:50 by stak              #+#    #+#             */
/*   Updated: 2024/04/05 16:03:18 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a)
{
	t_list	*max_node;

	max_node = highest(a);
	if ((*a)->lst == max_node->lst)
		ra(a);
	else if ((*a)->next->lst == max_node->lst)
		rra(a);
	if ((*a)->lst > (*a)->next->lst)
		sa(a);
}
