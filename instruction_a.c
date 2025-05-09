#include "push_swap.h"

int g_op_count = 0;

void	lst_swap_a(t_list **lst) 
{
	t_list	*tmp_lst_1;
	t_list	*tmp_lst_2;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp_lst_1 = *lst;
	tmp_lst_2 = tmp_lst_1->next;
	tmp_lst_1->next = tmp_lst_2->next;
	tmp_lst_2->next = tmp_lst_1;
	*lst = tmp_lst_2;
	ft_printf("sa\n");
	g_op_count++;
}

void	lst_push_a(t_list **lst, t_list **lst_2)
{
	t_list	*tmp_lst;
	
	if (!lst || !*lst)
		return ;
	tmp_lst = *lst;
	*lst = tmp_lst->next;
	tmp_lst->next = NULL;
	ft_lstadd_front(lst_2, tmp_lst);
	ft_printf("pb\n");
	g_op_count++;
}

void	lst_rotate_a(t_list **lst)
{
	t_list	*tmp_lst;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp_lst = *lst;
	*lst = tmp_lst->next;
	tmp_lst->next = NULL;
	ft_lstadd_back(lst, tmp_lst);
	ft_printf("ra\n");
	g_op_count++;
}

void	lst_reverse_rotate_a(t_list **lst)
{
	t_list	*tmp_lst;
	t_list	*tmp_lst_2;

	if (!lst || !*lst || !(*lst)->next)
		return ;

	tmp_lst = *lst;
	tmp_lst_2 = *lst;
	while (tmp_lst->next)
		tmp_lst = tmp_lst->next;
	while (tmp_lst_2->next != tmp_lst)
		tmp_lst_2 = tmp_lst_2->next;
	tmp_lst_2->next = NULL;
	ft_lstadd_front(lst, tmp_lst);
	ft_printf("rra\n");
	g_op_count++;
}
