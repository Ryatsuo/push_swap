// Cree une nouvelle liste en copiant une valeur dans content
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}
/*
#include <stdio.h>
int main (void)
{
	char a[] = "coucou les amis";
	t_list *newlist = ft_lstnew(a);
	printf("%s\n", (char *)newlist -> content);
	return	(0);
}*/