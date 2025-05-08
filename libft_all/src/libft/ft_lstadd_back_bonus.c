// ajoute un élément a la fin d'une liste chainée;
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp_lst = *lst;
	while (tmp_lst -> next != NULL)
		tmp_lst = tmp_lst -> next;
	tmp_lst -> next = new;
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	t_list	*troisieme_pokemon = ft_lstnew("Florizard");
	ft_lstadd_back(&lst, premier_pokemon);
	ft_lstadd_back(&lst, deuxieme_pokemon);
	ft_lstadd_back(&lst, troisieme_pokemon);
	while (lst)
	{
		printf("%s\n", (char *)lst -> content);
		lst = lst -> next;
	}
	return (0);
}*/