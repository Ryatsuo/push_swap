// Copie un tableau avec malloc avec un indice de départ jusqu'a len caractère
#include "libft.h"

static char	*ft_strscpy(char const *c, char *tab, int start, size_t len)
{
	size_t	i;

	i = 0;
	while (c[start] && i < len)
	{
		tab[i] = c[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	size_t			i;
	char			*tab;
	size_t			c_len;
	unsigned int	tmp_start;

	i = 0;
	c_len = ft_strlen(c);
	tmp_start = start;
	if (len == 0 || start >= c_len)
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	while (c[start] && i < len)
	{
		i++;
		start++;
	}
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	return (ft_strscpy(c, tab, tmp_start, i));
}
/*
#include <stdio.h>
int main (void)
{
	char const a[] = "coucou coucou les amis";
	char *tab = ft_substr(a, 7, 14);
	printf("le tableau a pour valeur :%s\n", tab);
	free(tab);
	return (0);
}*/