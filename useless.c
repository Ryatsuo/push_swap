#include "push_swap.h"

/*
int swap(t_list **pile_a, t_list **pile_b)
{
    int min = find_lowest_nbr(*pile_a);
    int second_min = find_second_lowest_nbr(*pile_a);
    int max = find_highest_nbr(*pile_b);
    int second_max = is_next_max(*pile_b);

    if (min == 2 && second_min == 1 && max == 2 && second_max == 1)
    {
        lst_doble_swap(pile_a, pile_b);
        return (1);
    }
    else if (min == 2 && second_min == 1)
    {
        lst_swap_a(pile_a);
        return (1);
    }
    else if (max == 2 && second_max == 1)
    {
        lst_swap_b(pile_b);
        return (1);
    }
    return (0);
}

int find_len_lowest_nbr(t_list *pile_b, int min)
{
    t_list *tmp;
    int len;

    tmp = pile_b;
    len = 0;
    while (*(int *)tmp->content != min)
    {
        tmp = tmp->next;
        len++;
    }
    return (len);
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
}*/