#include "push_swap.h"

void	lst_swap(t_list **lst) 
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
}

void	lst_rotate(t_list **lst)
{
	t_list	*tmp_lst;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp_lst = *lst;
	*lst = tmp_lst->next;
	tmp_lst->next = NULL;
	ft_lstadd_back(lst, tmp_lst);
}

void	lst_reverse_rotate(t_list **lst)
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
}
