// Remplit une zone mémoire avec une valeur donnée
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s\n", (char *)ft_memset(av[1], (av[2][0]), atoi(av[3])));
	return (0);
}*/