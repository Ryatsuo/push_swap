/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:34:15 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:34:16 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Affiche une chaine de caractère en choisissant ça sortie
#include "../../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char a[] = "coucou les amis";
	ft_putstr_fd(a, 1);
	return (0);
}*/