// Compare chaque caractère d'une chaine jusqu'à n caractère
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("ft_strncmp renvoie : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("strncmp renvoie : %d\n", strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}*/