// Duplique un chaine de caractère avec Malloc
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tab;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(s);
	tab = malloc(sizeof(char) * (len_s + 1));
	if (!tab)
		return (0);
	while ((char)s[i])
	{
		tab[i] = (char)s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main (void)
{
	const char a[] = "coucou les amis";
	char *tab = ft_strdup(a);
	printf("%s\n", tab);
	free(tab);
	return (0);
}*/