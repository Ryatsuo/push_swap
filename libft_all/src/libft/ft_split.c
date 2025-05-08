// Découpe une chaine en double tableau selon les délimiteurs
#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	compteur;
	size_t	start;
	size_t	len;

	i = 0;
	compteur = 0;
	start = 0;
	len = 0;
	while (s[i])
	{
		if (i == 0 && s[0] != c)
			compteur++;
		start = i;
		while (s[i] == c)
			i++;
		len = i - start;
		if (len > 0 && s[i])
			compteur++;
		i++;
	}
	return (compteur);
}

static size_t	ft_countcarac(char const *s, char c, size_t start)
{
	size_t	i;

	i = 0;
	while (s[start] == c)
		start++;
	while (s[start] != c && s[start])
	{
		i++;
		start++;
	}
	return (i);
}

static size_t	ft_countskip(char const *s, char c, size_t start)
{
	while (s[start] == c)
		start++;
	while (s[start] != c && s[start])
		start++;
	return (start);
}

static char	**fill_split(char const *s, char c, char **tab, size_t nbr_word)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (j < nbr_word)
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			tab[j][k] = s[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	nbr_word;
	size_t	start;
	char	**tab;

	i = 0;
	start = 0;
	nbr_word = ft_countword(s, c);
	if (nbr_word == 0 || !(ft_countcarac(s, c, start)))
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc(sizeof(char *) * (nbr_word + 1));
	if (!tab)
		return (NULL);
	while (i < nbr_word)
	{
		tab[i++] = malloc(sizeof(char) * (ft_countcarac(s, c, start) + 1));
		start += ft_countskip(s, c, start);
	}
	return (fill_split(s, c, tab, nbr_word));
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