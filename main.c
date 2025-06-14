/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:32:19 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:32:20 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	launch(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp_a;
	t_list	*tmp_a2;

	tmp_a = *pile_a;
	init_index(*pile_a);
	parse_index(*pile_a);
	if (ft_lstsize(*pile_a) == 1)
		return ;
	tmp_a2 = tmp_a->next;
	while (tmp_a2)
	{
		if (*(int *)tmp_a->index > *(int *)tmp_a2->index)
			break ;
		tmp_a = tmp_a->next;
		tmp_a2 = tmp_a2->next;
	}
	if (!tmp_a2)
		return ;
	dynamique_chunk(pile_a, pile_b);
	fill_a(pile_a, pile_b);
}

void	check_args(int argc, char **argv, char ***tab, t_list **pile_a)
{
	if (argc == 2)
		*tab = ft_split(argv[1], ' ');
	if ((argc == 2 && *tab && check_arg_are_different(*tab, 0)
			&& check_arg_is_nbr(*tab, 0) && check_nbr_range(*tab, 0)))
		*pile_a = parsing(*tab, 0);
	else if (argc > 2 && check_arg_are_different(argv, 1)
		&& check_arg_is_nbr(argv, 1) && check_nbr_range(argv, 1))
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
