/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:34:17 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:34:18 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Affiche un entier sur la sortie souhaitez
#include "../../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_putnbr_fd(ft_atoi(av[1]), 1);
	return (0);
}*/