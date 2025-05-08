// Convertit les lettres minuscule en majuscule
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
		return (1);
	while (av[i])
	{
		printf("valeur apres changement %c\n", ft_toupper(av[i][0]));
		i++;
	}
	return (0);
}*/