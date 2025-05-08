#include "push_swap.h"

int	find_len_nbr(t_list *pile_b, int nbr)
{
	t_list *tmp;
	int	len;

	tmp = pile_b;
	len = 0;
	while (*(int *)tmp->index != nbr)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

int	find_highest_nbr(t_list *pile_b)
{
	t_list	*tmp_pile_b;
	int		high_num;

	if (!pile_b)
		return (-1);
	tmp_pile_b = pile_b;
	high_num = *(int *)tmp_pile_b->index;
	while (tmp_pile_b)
	{
		if (high_num < *(int *)tmp_pile_b->index)
			high_num = *(int *)tmp_pile_b->index;
		tmp_pile_b = tmp_pile_b->next;
	}
	return (high_num);
}

int	is_next_max(t_list *pile_b)
{
	int		high_num;

	if (!pile_b || !pile_b->next)
		return (-1);
	high_num = find_highest_nbr(pile_b);
	if (*(int *)pile_b->index == (high_num - 1))
		return (1);
	return (-1);
}