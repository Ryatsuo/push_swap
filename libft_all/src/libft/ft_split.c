// Découpe une chaine en double tableau selon les délimiteurs
#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**allocate_tab(size_t nbr_word)
{
	char	**tab;

	if (nbr_word == 0)
	{
		tab = malloc(sizeof(char *));
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc(sizeof(char *) * (nbr_word + 1));
	if (!tab)
		return (NULL);
	return (tab);
}

static int	fill_words(char const *s, char c, char **tab, size_t nbr_word)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (j < nbr_word)
	{
		while (s[i] == c)
			i++;
		k = 0;
		while (s[i + k] && s[i + k] != c)
			k++;
		tab[j] = malloc(k + 1);
		if (!tab[j])
			return (0);
		ft_strlcpy(tab[j], &s[i], k + 1);
		i += k;
		j++;
	}
	tab[j] = NULL;
	return (1);
}

static void	clean_tab(char **tab, size_t index)
{
	while (index > 0)
		free(tab[--index]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nbr_word;

	if (!s)
		return (NULL);
	nbr_word = ft_countword(s, c);
	tab = allocate_tab(nbr_word);
	if (!tab)
		return (NULL);
	if (nbr_word > 0 && !fill_words(s, c, tab, nbr_word))
	{
		clean_tab(tab, nbr_word);
		return (NULL);
	}
	return (tab);
}
/*
#include <stdio.h>
int main ()
{
	size_t	i = 0;
	char a[] = "  coucou    les   amis   ";
	char **tab = ft_split(a, ' ');
	while (i < ft_countword(a, ' '))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	if (tab[i] == 0)
	printf("le dernier tab est NULL");
	return (0);
}*/