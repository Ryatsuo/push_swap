#include "push_swap.h"

void	fill_a(t_list **lst_a, t_list **lst_b)
{
	while (*lst_b)
	{
		count_push_max_or_nextmax(lst_a, lst_b);
		if (ft_lstsize(*lst_b) == 1)
			lst_push_b(lst_b,lst_a);
	}
}
