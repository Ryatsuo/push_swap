// Supprime en mémoire le contenu d'une liste puis la liste elle même
#include "../../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
	del(lst -> index);
	free(lst);
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
	printf("%s\n", (char *)lst -> content);
	lst = lst -> next;
	ft_lstdelone (lst, ft_del);
	printf("%s\n", (char *)lst -> content);
	return (0);
}*/