// Copie un nombre d'octets d'une source vers une destination
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac != 4)
		return (1);
	ft_memcpy(av[1], av[2], atoi(av[3]));
	printf("l'arg 1 a comme valeur %s\n", av[1]);
	return (0);
}*/