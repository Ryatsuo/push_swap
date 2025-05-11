#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	launch(t_list **pile_a, t_list **pile_b)
{
	init_index(*pile_a);
	parse_index(*pile_a);
	dynamique_chunk(pile_a, pile_b);
	fill_a(pile_a, pile_b);
}

void	check_args(int argc, char **argv, char ***tab, t_list **pile_a)
{
	if (argc == 2)
		*tab = ft_split(argv[1], ' ');
	if ((argc == 2 && *tab && check_arg_are_different(*tab)
			&& check_arg_is_nbr(*tab) && check_nbr_range(*tab)))
		*pile_a = parsing(*tab, 0);
	else if (argc > 2 && check_arg_are_different(argv)
		&& check_arg_is_nbr(argv) && check_nbr_range(argv))
		*pile_a = parsing(argv, 1);
	else
	{
		if (*tab)
			free_split(*tab);
		else
		{
			error();
		}
	}
}

int	main(int argc, char **argv)
{
	t_list	*pile_a;
	t_list	*pile_b;
	char	**tab;

	pile_a = NULL;
	pile_b = NULL;
	tab = NULL;
	check_args(argc, argv, &tab, &pile_a);
	if (!pile_a)
		error();
	launch(&pile_a, &pile_b);
	if (tab)
		free_split(tab);
	free_list(pile_a);
	free_list(pile_b);
	return (0);
}
