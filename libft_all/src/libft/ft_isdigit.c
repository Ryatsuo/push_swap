/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:41 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:42 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Teste si un caractère est un chiffre
#include "../../libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("la valeur de retour est %d\n", ft_isdigit(argv[1][0]));
	return (0);
}*/