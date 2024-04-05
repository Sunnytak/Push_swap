/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:03:45 by stak              #+#    #+#             */
/*   Updated: 2024/04/05 13:22:58 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				lst;
	int				new;
	long int		content;
	struct s_list	*target_node;
	struct s_list	*next;
	struct s_list	*prev;
	bool			above_median;
	bool			cheapest;
}					t_list;
//split
static int		wordcount(const char *s, char c);
static char		*wordtoprint(const char **s, char c);
static void		free_all(int i, char **ptr);
char			**ft_split(char const *s, char c);

//split_utils
// char			*ft_substr(char const *s, unsigned int start, size_t len);
// char			*ft_strdup(const char *s1);
// void			*ft_memcpy(void *dst, const void *src, size_t n);
// size_t			ft_strlen(const char *s);

//handle_errors
int				error_syntax(char *str_n);
int				error_duplicate(t_list *a, int n);
void			free_stack(t_list **stack);
void			free_errors(t_list **a);

//list_utils
void			ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);

//sort_a_to_b
void			current_index(t_list *stack);
static void		cost_analysis_a(t_list *a, t_list *b);
void			set_cheapest(t_list *stack);
void			init_nodes_a(t_list *a, t_list *b);

//sort_b_to_a
static void		set_target_b(t_list *a, t_list *b);
void			init_nodes_b(t_list *a, t_list *b);

//stack_sort
static void		append_node(t_list **stack, int n);
void			init_stack_a(t_list **a, char **argv);
t_list			*get_cheapest(t_list *stack);

//stack_utils
int				ft_lstsize(t_list *lst);
t_list			*find_last(t_list *stack);
bool			stack_sorted(t_list *stack);
t_list			*lowest(t_list **stack);
t_list			*highest(t_list **stack);

//swap
void			sa(t_list **a);
void			sb(t_list **b);
void			ss(t_list **a, t_list **b);

//rotate
void			ra(t_list **a);
void			rb(t_list **b);
void			rr(t_list **a, t_list **b);

//push
void			pa(t_list **a, t_list **b);
void			pb(t_list **a, t_list **b);

//reverse
void			rra(t_list **a);
void			rrb(t_list **b);
void			rrr(t_list **a, t_list **b);

#endif