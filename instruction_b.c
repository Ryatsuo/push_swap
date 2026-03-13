/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:32:14 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:32:15 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	lst_swap_b(t_list **lst)
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
	ft_printf("sb\n");
}

void	lst_push_b(t_list **lst, t_list **lst_2)
{
	t_list	*tmp_lst;

	if (!lst || !*lst)
		return ;
	tmp_lst = *lst;
	*lst = tmp_lst->next;
	tmp_lst->next = NULL;
	ft_lstadd_front(lst_2, tmp_lst);
	ft_printf("pa\n");
}

void	lst_rotate_b(t_list **lst)
{
	t_list	*tmp_lst;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp_lst = *lst;
	*lst = tmp_lst->next;
	tmp_lst->next = NULL;
	ft_lstadd_back(lst, tmp_lst);
	ft_printf("rb\n");
}

void	lst_reverse_rotate_b(t_list **lst)
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
	ft_printf("rrb\n");
}
