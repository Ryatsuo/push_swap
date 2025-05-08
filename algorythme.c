#include "push_swap.h"

void	dynamique_chunk(t_list **lst_a, t_list **lst_b)
{
	int		end;
	int		len_lst_a;

	len_lst_a = ft_lstsize(*lst_a);
	if (len_lst_a >= 500)
		end = 35;
	else if (len_lst_a >= 50)
		end = 20;
	else 
		end = 3;
	while (*lst_a)
	{
		end = (dynamique_chunk_algo(lst_a, lst_b, end));
	}
}

int dynamique_chunk_algo(t_list **lst_a, t_list **lst_b, int end)
{
	int current_value;

    t_list *tmp_a = *lst_a;
    if (tmp_a == NULL)
        return end;
    current_value = *(int *)(tmp_a->index);
    if (current_value <= end)
    {
        lst_push_a(lst_a, lst_b);
        if (*(int *)(*lst_b)->index < end / 2 && ft_lstsize(*lst_b) > 1)
            lst_rotate_b(lst_b);
        end++;
    }
    else
    {
        if (!swap(lst_a, lst_b))
            lst_rotate_a(lst_a);
    }
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

int swap(t_list **pile_a, t_list **pile_b)
{
    int min = find_lowest_nbr(*pile_a);
    int second_min = find_second_lowest_nbr(*pile_a);
    int max = find_highest_nbr(*pile_b);
    int second_max = is_next_max(*pile_b);

    if (min == 2 && second_min == 1 && max == 2 && second_max == 1)
    {
        lst_doble_swap(pile_a, pile_b);
        return 1;
    }
    else if (min == 2 && second_min == 1)
    {
        lst_swap_a(pile_a);
        return 1;
    }
    else if (max == 2 && second_max == 1)
    {
        lst_swap_b(pile_b);
        return 1;
    }
    return 0;
}


int	find_len_lowest_nbr(t_list *pile_b, int min)
{
	t_list *tmp;
	int	len;

	tmp = pile_b;
	len = 0;
	while (*(int *)tmp->index != min)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

int	find_lowest_nbr(t_list *pile_b)
{
	t_list	*tmp_pile_b;
	int		high_num;

	if (!pile_b)
		return (-1);
	tmp_pile_b = pile_b;
	high_num = *(int *)tmp_pile_b->index;
	while (tmp_pile_b)
	{
		if (high_num > *(int *)tmp_pile_b->index)
			high_num = *(int *)tmp_pile_b->index;
		tmp_pile_b = tmp_pile_b->next;
	}
	return (high_num);
}

int	find_second_lowest_nbr(t_list *pile_b)
{
	int		high_num;

	if (!pile_b || !pile_b->next)
		return (-1);
	high_num = find_highest_nbr(pile_b);
	if (*(int *)pile_b->index == (high_num + 1))
		return (1);
	return (-1);
}
