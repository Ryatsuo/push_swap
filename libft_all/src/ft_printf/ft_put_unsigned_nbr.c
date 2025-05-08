#include "libft.h"

int	ft_put_unsigned_nbr(unsigned int n)
{
	int	compteur;

	compteur = 0;
	if (n >= 10)
		compteur += ft_put_unsigned_nbr(n / 10);
	compteur += ft_putchar((n % 10) + '0');
	return (compteur);
}
