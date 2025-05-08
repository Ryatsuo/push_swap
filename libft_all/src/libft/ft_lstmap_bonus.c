//Creer une liste chainée provenant d'une autre liste + applique une fonction
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
void *ft_strtoupper(void *content)
{
    char *s = (char *)content;
    int i = 0;
    char *new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            new_str[i] = s[i] - 32;
        else
            new_str[i] = s[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

void	del(void *content)
{
    free(content);
}

void	ft_putstr(void *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*new_lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	t_list	*troisieme_pokemon = ft_lstnew("Florizard");
	ft_lstadd_back(&lst, premier_pokemon);
	ft_lstadd_back(&lst, deuxieme_pokemon);
	ft_lstadd_back(&lst, troisieme_pokemon);
	new_lst = ft_lstmap(lst, ft_strtoupper, del);
	ft_lstiter (new_lst, ft_putstr);
	return (0);
}*/