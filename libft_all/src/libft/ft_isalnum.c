/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:37 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:38 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Teste si un caractère est alphanumérique
#include "../../libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("la valeur de retour est %d\n", ft_isalnum(av[1][0]));
	return (0);
}*/