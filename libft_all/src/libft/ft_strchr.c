/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:34:21 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:34:22 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Rechercher la première occurrence d'un caractère dans une chaîne
#include "../../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if(ac == 1)
		return (1);
	printf("l'occurence a ete trouve ici : %s", ft_strchr(av[1], av[2][0]));
	return (0);
}*/