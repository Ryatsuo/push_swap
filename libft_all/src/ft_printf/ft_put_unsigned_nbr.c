/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:14 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:15 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_put_unsigned_nbr(unsigned int n)
{
	int	compteur;

	compteur = 0;
	if (n >= 10)
		compteur += ft_put_unsigned_nbr(n / 10);
	compteur += ft_putchar((n % 10) + '0');
	return (compteur);
}
