// Copie une chaine avec une taille maximum
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dsize == 0 || !dst)
		return (i);
	while (src[j] && j < dsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char a[] = "coucou";
	char b[100];
	int e = 7;
	ft_strlcpy(b, a, e);
	printf("ma fonction : %s\n", b);
	return (0);
}*/