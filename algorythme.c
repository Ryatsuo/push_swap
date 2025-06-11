/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:32:05 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:32:06 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dynamique_chunk(t_list **lst_a, t_list **lst_b)
{
	int		end;
	int		len_lst_a;

	len_lst_a = ft_lstsize(*lst_a);
	if (len_lst_a >= 500)
		end = 30;
	else if (len_lst_a >= 50)
		end = 13;
	else
		end = 2;
	while (*lst_a)
	{
		end = (dynamique_chunk_algo(lst_a, lst_b, end));
	}
}

int	dynamique_chunk_algo(t_list **lst_a, t_list **lst_b, int end)
{
	t_list	*tmp_b;

	if (!*lst_a)
		return (end);
	if (*(int *)(*lst_a)->index <= end)
	{
		lst_push_a(lst_a, lst_b);
		if (ft_lstsize(*lst_b) > 1)
		{
			tmp_b = *lst_b;
			if (*(int *)tmp_b->index < *(int *)tmp_b->next->index
				&& *(int *)tmp_b->index < ft_lstsize((*lst_b)))
			{
				if (*lst_a && *(int *)(*lst_a)->index >= end)
					lst_doble_rotate(lst_a, lst_b);
				else
					lst_rotate_b(lst_b);
			}
		}
		end++;
	}
	else
		rotate(lst_a);
	return (end);
}

void	rotate(t_list **pile_a)
{
	int		min_pos;
	int		size;
	t_list	*tmp_pile_a;

	tmp_pile_a = *pile_a;
	min_pos = find_lowest_nbr(tmp_pile_a);
	size = ft_lstsize(tmp_pile_a);
	if (min_pos <= size / 2)
		lst_rotate_a(pile_a);
	else
		lst_reverse_rotate_a(pile_a);
}

int	find_lowest_nbr(t_list *pile_b)
{
	t_list	*tmp_pile_b;
	int		lowest_value;
	int		current_value;

	if (!pile_b)
		return (-1);
	tmp_pile_b = pile_b;
	lowest_value = *(int *)tmp_pile_b->content;
	while (tmp_pile_b)
	{
		current_value = *(int *)tmp_pile_b->content;
		if (lowest_value > current_value)
			lowest_value = current_value;
		tmp_pile_b = tmp_pile_b->next;
	}
	return (lowest_value);
}
