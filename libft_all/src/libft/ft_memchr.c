// Recherche dans une zone mémoire la première occurrence d'un caractère
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (tab[i] == (unsigned char)c)
			return ((void *)&tab[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!(unsigned char *)ft_memchr(av[1], av[2][0], atoi(av[3])))
	{
		printf("Aucune occurence trouvé");
		return (0);
	}
	printf("%s\n", (unsigned char *)ft_memchr((av[1]), (av[2][0]), atoi(av[3])));
	return (0);
}*/