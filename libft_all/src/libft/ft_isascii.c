// Teste si un caractère est dans la table ascii (7 bit)
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("valeur de retour : %d\n", ft_isascii(av[1][0]));
	return (0);
}*/