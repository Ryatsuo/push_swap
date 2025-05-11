#include "libft.h"

void	free_list(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp->content)
			free(tmp->content);
		if (tmp->index)
			free(tmp->index);
		free(tmp);
	}
}
