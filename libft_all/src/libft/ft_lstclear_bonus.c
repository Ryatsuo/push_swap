// Supprime en mémoire le contenu d'une liste et la liste = null
#include "../../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_lst;
	t_list	*tmp_current;

	if (!lst || !*lst)
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		tmp_current = tmp_lst;
		tmp_lst = tmp_lst -> next;
		del(tmp_current -> content);
		del(tmp_current -> index);
		free(tmp_current);
	}
	*lst = NULL;
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew(ft_strdup("Bulbizarre"));
	t_list	*deuxieme_pokemon = ft_lstnew(ft_strdup("Herbizarre"));
	t_list	*troisieme_pokemon = ft_lstnew(ft_strdup("Florizard"));
	ft_lstadd_back(&lst, premier_pokemon);
	ft_lstadd_back(&lst, deuxieme_pokemon);
	ft_lstadd_back(&lst, troisieme_pokemon);
	printf("%s\n", (char *)lst -> content);
	ft_lstclear (&lst, free);
	if (!lst)
		printf("lst = NULL\n");
	return (0);
}*/