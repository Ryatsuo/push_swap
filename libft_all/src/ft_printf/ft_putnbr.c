/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:19 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:20 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putnbr(int n)
{
	int	compteur;

	compteur = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		compteur++;
	}
	if (n >= 10)
		compteur += ft_putnbr(n / 10);
	compteur += ft_putchar((n % 10) + '0');
	return (compteur);
}
