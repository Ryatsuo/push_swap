/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:34:42 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:34:43 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Recherche la dernière occurence d'un caractère dans une chaine
#include "../../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if(ac == 1)
		return (1);
	printf("l'occurence a ete trouve ici : %s", ft_strrchr(av[1], av[2][0]));
	return (0);
}*/