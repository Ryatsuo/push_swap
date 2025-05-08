#include "push_swap.h"

void	print_lst(t_list *pile, t_list *pile2)
{
	ft_printf("pile A\n");
	while (pile)
	{
		ft_printf("valeur: %d | index: %d\n", *(int *)pile->content, *(int *)pile->index);
		pile = pile->next;
	}
	ft_printf("pile B\n");
	while (pile2)
	{
		ft_printf("%d\n", *(int *)pile2->content);
		pile2 = pile2->next;
	}
	ft_printf("==================\n");
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int main(int argc, char **argv)
{
	t_list *pile_a;
	t_list *pile_b;

	pile_a = NULL;
	pile_b = NULL;
	if (argc > 2 && check_arg_are_different(argv)
		&& check_arg_is_nbr(argv) && check_nbr_range(argv))
		pile_a = parsing(argv);
		else
		error();
	if (!pile_a)
		error();
	init_index(pile_a);
	parse_index(pile_a);
	dynamique_chunk(&pile_a, &pile_b);
	fill_a(&pile_a, &pile_b);
	print_lst(pile_a, pile_b);
	ft_printf("%d\n", g_op_count);
	return (0);
} 
