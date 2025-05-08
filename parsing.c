#include "push_swap.h"

t_list *create_node(int nbr)
{
    t_list *new;
    int *value;

    value = malloc(sizeof(int));
    if (!value)
        return (NULL);
    *value = nbr;

    new = malloc(sizeof(t_list));
    if (!new)
    {
        free(value);
        return (NULL);
    }
    new->content = value;
    new->index = NULL;
    new->next = NULL;
    return (new);
}

t_list *parsing(char **argv)
{
    int i;
    t_list *new_node;
    t_list *pile_a;

    i = 1;
    pile_a = NULL;
    while (argv[i])
    {
        new_node = create_node(ft_atoi(argv[i]));
        if (!new_node)
        {
            free_list(pile_a);
            return (NULL);
        }
        ft_lstadd_back(&pile_a, new_node);
        i++;
    }
    return (pile_a);
}

void init_index(t_list *pile)
{
    t_list *tmp;

    tmp = pile;
    while (tmp)
    {
        tmp->index = malloc(sizeof(int));
        if (!tmp->index)
        {
            write(2, "malloc index failed\n", 21);
            free_list(pile);
            return ;
        }
        *(int *)tmp->index = -1;
        tmp = tmp->next;
    }
}

void	parse_index(t_list *pile)
{
	int		index;
	int		valeur;
	t_list	*tmp_lst;
	int		size;

	index = 0;
	size = ft_lstsize(pile);
	while (index < size)
	{
		valeur = find_lowest_nbr_parsing(pile);
		tmp_lst = pile;
		while (tmp_lst && *(int *)tmp_lst->content != valeur)
			tmp_lst = tmp_lst->next;
		if (tmp_lst->index)
			*(int *)tmp_lst->index = index;
		index++;
	}
}
