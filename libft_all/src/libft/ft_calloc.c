// Creer un tableau et convertit tout ses octest en 0
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > 0 && nmemb > 4294967295 / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
		ptr[i++] = 0;
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	size_t i = 0;
	size_t nmemb = 10;
	char *tab = ft_calloc(nmemb, sizeof(int));
	while (i < nmemb * sizeof(int))
	{
		if(tab[i] == 0)
			printf("le tableau a l'indice %d a bien la valeur 0\n", i);
		i++;
	}
	free(tab);
	return (0);
}*/