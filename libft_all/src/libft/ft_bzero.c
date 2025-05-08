// Convertit tout les octest d'une zone mémoire à 0
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	int i = 0;
	int j = 0;
	while(av[1][j])
		j++;
	if (ac != 3)
		return (1);
	ft_bzero(av[1], atoi(av[2]));
	while (i < j)
	{
		printf("%c\n", av[1][i]);
		i++;
	}
	return (0);
}*/