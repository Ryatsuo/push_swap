/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edobele <edobele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:33:12 by edobele           #+#    #+#             */
/*   Updated: 2025/06/12 01:33:13 by edobele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_put_hexa_upper(unsigned int nbr)
{
	char	*tab_hexa;
	int		compteur;

	tab_hexa = "0123456789ABCDEF";
	compteur = 0;
	if (nbr >= 16)
	{
		compteur += ft_put_hexa_upper(nbr / 16);
	}
	compteur += ft_putchar(tab_hexa[nbr % 16]);
	return (compteur);
}
