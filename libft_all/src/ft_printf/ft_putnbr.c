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
