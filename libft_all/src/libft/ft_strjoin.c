// Concatène plusieurs chaine en une en ajoutant un délimiteur entre chaque
#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!tab)
		return (NULL);
	while (str1[i])
	{
		tab[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		tab[i] = str2[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>
int main (void)
{
	const char a[] = "coucou ";
	const char b[] = "les amis";
	char *c = ft_strjoin(a, b);
	printf("%s\n", c);
	free(c);
	return (0);
}*/