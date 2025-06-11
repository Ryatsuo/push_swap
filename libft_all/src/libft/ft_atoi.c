/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:30 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:35:12 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit un char en int
#include "../../libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	nbr *= sign;
	return (nbr);
}

/*
#include <stdio.h>
int main (void)
{
	char a[] = "\n   -123";
	printf("%d\n", ft_atoi(a));
	return (0);
}*/