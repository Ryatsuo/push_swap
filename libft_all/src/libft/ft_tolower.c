/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:34:46 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:34:47 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit les lettre majuscule en minuscule
#include "../../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
		return (1);
	while (av[i])
	{
		printf("valeur apres changement %c\n", ft_toupper(av[i][0]));
		i++;
	}
	return (0);
}*/