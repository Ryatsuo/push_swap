// Teste si un caractère est imprimable
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("la valueur de retour est %d\n", ft_isprint(av[1][0]));
	return (0);
}*/