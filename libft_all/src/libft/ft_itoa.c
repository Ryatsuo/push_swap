// Copie un entier dans une chaine de caractère
#include "libft.h"

static size_t	comptcarac(int n)
{
	size_t	nbr_carac;
	int		tmp_n;

	nbr_carac = 1;
	tmp_n = n;
	if (tmp_n < 0)
	{
		nbr_carac++;
		tmp_n = -tmp_n;
	}
	while (tmp_n >= 10)
	{
		tmp_n /= 10;
		nbr_carac++;
	}
	return (nbr_carac);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

static char	*ft_rev_in_tab(char *tab)
{
	size_t	i;
	size_t	j;
	size_t	len_tab;
	char	tmp_tab;

	i = 0;
	j = ft_strlen(tab) - 1;
	len_tab = ft_strlen(tab);
	while (i < len_tab / 2)
	{
		tmp_tab = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp_tab;
		i++;
		j--;
	}
	return (tab);
}

static char	*fill_tab(char *tab, int n, size_t i)
{
	int	tmp_tab;

	tmp_tab = n;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		tab[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	tab[i] = n % 10 + '0';
	i++;
	if (tmp_tab < 0)
		tab[i++] = '-';
	tab[i] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*tab;
	size_t	nbr_carac;
	size_t	i;

	i = 0;
	nbr_carac = comptcarac(n);
	if (n == -2147483648)
	{
		tab = malloc(sizeof(char) * 12);
		if (!tab)
			return (NULL);
		tab = ft_strcpy(tab, "-2147483648");
		return (tab);
	}
	tab = malloc(sizeof(char) * (nbr_carac + 1));
	if (!tab)
		return (NULL);
	tab = (fill_tab(tab, n, i));
	return (ft_rev_in_tab(tab));
}
/*
#include <stdio.h>
int main(void)
{
	char *tab = ft_itoa(-2147483648);
	printf("%s\n", tab);
	return (0);
}*/