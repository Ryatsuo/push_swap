#include "push_swap.h"

void	fill_a(t_list **lst_a, t_list **lst_b)
{
	while (*lst_b)
	{
		count_push_max_or_nextmax(lst_a, lst_b);
		if (!(*lst_b)->next && (*lst_b)->content)
			lst_push_b(lst_b,lst_a);
	}
}
