// Creer une chaine et enlève au début et fin les délimiteur
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	tab = malloc(sizeof(char) * (end - start + 1));
	if (!tab)
		return (NULL);
	while (start < end)
	{
		tab[i] = s1[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main (void)
{
	char const a[] = "cccoucou!!c";
	char const b[] = "c !";
	char *c = ft_strtrim(a, b);
	printf("%s\n", c);
	free(c);
	return (0);
}*/