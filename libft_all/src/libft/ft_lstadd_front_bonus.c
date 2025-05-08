// Cree une liste chainee en rajouter une liste au debut de la chaine
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	printf("%s\n", (char *)premier_pokemon -> content);
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	printf("%s\n", (char *)deuxieme_pokemon -> content);
	ft_lstadd_front(&lst, premier_pokemon);
	ft_lstadd_front(&lst, deuxieme_pokemon);
	while(lst)
	{
		printf("%s\n", (char *) lst -> content);
		lst = lst -> next;
	}
	return (0);
}*/