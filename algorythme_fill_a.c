/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythme_fill_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:32:00 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:32:01 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_a(t_list **lst_a, t_list **lst_b)
{
	while (*lst_b)
	{
		count_push_max_or_nextmax(lst_a, lst_b);
		if (ft_lstsize(*lst_b) == 1)
			lst_push_b(lst_b, lst_a);
	}
}

void	count_push_max_or_nextmax(t_list **lst_a, t_list **lst_b)
{
	int	max_pos;
	int	cost_max;
	int	next_max_val;
	int	next_max_pos;
	int	cost_next;

	if (!(*lst_b) || !(*lst_b)->next)
		return ;
	next_max_val = find_next_max((*lst_b), find_highest_nbr((*lst_b)));
	max_pos = find_len_nbr((*lst_b), find_highest_nbr((*lst_b)));
	next_max_pos = find_len_nbr((*lst_b), next_max_val);
	cost_max = len_reach_top(lst_b, max_pos);
	cost_next = len_reach_top(lst_b, next_max_pos);
	if (cost_next + 1 < cost_max)
		nextmax_first(lst_a, lst_b, next_max_val, find_highest_nbr((*lst_b)));
	if (cost_next + 1 >= cost_max)
		push_max_first(lst_a, lst_b, find_highest_nbr((*lst_b)));
}

void	push_max_first(t_list **lst_a, t_list **lst_b, int max_val)
{
	int	max_pos;

	max_pos = find_len_nbr(*lst_b, max_val);
	while (*(int *)(*lst_b)->index != max_val)
	{
		if (max_pos < ft_lstsize(*lst_b) / 2)
			lst_rotate_b(lst_b);
		else
			lst_reverse_rotate_b(lst_b);
		max_pos = find_len_nbr(*lst_b, max_val);
	}
	lst_push_b(lst_b, lst_a);
}

void	nextmax_first(t_list **a, t_list **b, int next_max_val, int max_val)
{
	int	max_pos;
	int	next_max_pos;

	next_max_pos = find_len_nbr(*b, next_max_val);
	max_pos = find_len_nbr(*b, max_val);
	while (*(int *)(*b)->index != next_max_val)
	{
		if (next_max_pos < ft_lstsize(*b) / 2)
			lst_rotate_b(b);
		else
			lst_reverse_rotate_b(b);
		next_max_pos = find_len_nbr(*b, next_max_val);
	}
	lst_push_b(b, a);
	while (*(int *)(*b)->index != max_val)
	{
		if (max_pos < ft_lstsize(*b) / 2)
			lst_rotate_b(b);
		else
			lst_reverse_rotate_b(b);
		max_pos = find_len_nbr(*b, max_val);
	}
	lst_push_b(b, a);
	if (*(int *)(*a)->index > *(int *)(*a)->next->index)
		lst_swap_a(a);
}

int	len_reach_top(t_list **lst_b, int len_node_in_lst)
{
	int	size;

	if (!lst_b || !*lst_b)
		return (0);
	size = ft_lstsize(*lst_b);
	if (len_node_in_lst <= size / 2)
		return (len_node_in_lst);
	else
		return (size - len_node_in_lst);
}
