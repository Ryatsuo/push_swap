// Applique la fonction f sur tout les content de la liste chainées
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_lst;

	if (!lst || !f)
		return ;
	tmp_lst = lst;
	while (tmp_lst)
	{
		f(tmp_lst -> content);
		tmp_lst = tmp_lst -> next;
	}
}
/*
#include <stdio.h>
void	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew(ft_strdup("Bulbizarre"));
	t_list	*deuxieme_pokemon = ft_lstnew(ft_strdup("Herbizarre"));
	t_list	*troisieme_pokemon = ft_lstnew(ft_strdup("Florizard"));
	ft_lstadd_back(&lst, premier_pokemon);
	ft_lstadd_back(&lst, deuxieme_pokemon);
	ft_lstadd_back(&lst, troisieme_pokemon);
	ft_lstiter (lst, ft_putstr);
	return (0);
}*/