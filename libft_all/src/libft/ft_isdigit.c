// Teste si un caractère est un chiffre
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("la valeur de retour est %d\n", ft_isdigit(argv[1][0]));
	return (0);
}*/