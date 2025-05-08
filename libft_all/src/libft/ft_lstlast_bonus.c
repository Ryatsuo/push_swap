// renvoie le dernier élément d'une liste chainée
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_lst;

	if (!lst)
		return (NULL);
	tmp_lst = lst;
	while (tmp_lst -> next != NULL)
		tmp_lst = tmp_lst -> next;
	return (tmp_lst);
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	t_list	*troisieme_pokemon = ft_lstnew("Florizard");
	ft_lstadd_front(&lst, premier_pokemon);
	ft_lstadd_front(&lst, deuxieme_pokemon);
	ft_lstadd_front(&lst, troisieme_pokemon);
	t_list	*last_lst = ft_lstlast(lst);
	printf("%s\n", (char *)last_lst -> content);
	return (0);
}*/