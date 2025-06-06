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
