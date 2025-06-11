/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:13 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:14 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_put_hexa(unsigned long nbr)
{
	char	*tab_hexa;
	int		compteur;

	tab_hexa = "0123456789abcdef";
	compteur = 0;
	if (nbr >= 16)
	{
		compteur += ft_put_hexa(nbr / 16);
	}
	compteur += ft_putchar(tab_hexa[nbr % 16]);
	return (compteur);
}
