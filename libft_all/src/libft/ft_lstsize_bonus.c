/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:58 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:59 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calcule la longeur d'une liste chainée
#include "../../libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp_lst;

	i = 0;
	tmp_lst = lst;
	while (tmp_lst)
	{
		i++;
		tmp_lst = tmp_lst -> next;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	ft_lstadd_front(&lst, premier_pokemon);
	ft_lstadd_front(&lst, deuxieme_pokemon);
	int len_lst = ft_lstsize(lst);
	printf("%d\n", len_lst);
	return (0);
}*/