/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:57:50 by stak              #+#    #+#             */
/*   Updated: 2024/04/04 14:38:41 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a)
{
	t_list	*max_node;

	max_node = highest(a);
	if ((*a)->lst == max_node->lst)
		rotate_ra(a);
	else if ((*a)->next->lst == max_node->lst)
		reverse_rotate_rra(a);
	if ((*a)->lst > (*a)->next->lst)
		swap_sa(a);
}
