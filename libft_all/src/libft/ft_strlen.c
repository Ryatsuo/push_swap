// Calcule la longeur d'une chaine de caractère
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("La longeur de la string est de : %d\n", ft_strlen(av[1]));
	return (0);
}*/