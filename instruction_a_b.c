#include "push_swap.h"

void	lst_doble_swap(t_list **lst, t_list **lst_2)
{
	if (!lst || !*lst || !(*lst)->next || !lst_2 || !*lst_2 || !(*lst_2)->next)
		return ;
	lst_swap(lst);
	lst_swap(lst_2);
	ft_printf("ss\n");
	g_op_count++;
}

void	lst_doble_rotate(t_list **lst, t_list **lst_2)
{
	if (!lst || !*lst || !(*lst)->next || !lst_2 || !*lst_2 || !(*lst_2)->next)
		return ;
	lst_rotate(lst);
	lst_rotate(lst_2);
	ft_printf("rr\n");
	g_op_count++;
}

void	lst_doble_reverse_rotate(t_list **lst, t_list **lst_2)
{
	if (!lst || !*lst || !(*lst)->next || !lst_2 || !*lst_2 || !(*lst_2)->next)
		return ;
	lst_reverse_rotate(lst);
	lst_reverse_rotate(lst_2);
	ft_printf("rrr\n");
	g_op_count++;
}