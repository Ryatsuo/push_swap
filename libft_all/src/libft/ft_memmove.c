// Copie un nombre d'octets en partant de la fin
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%s\n", (unsigned char *)ft_memmove(av[1], &av[1][2], atoi(av[2])));
	return (0);
}*/