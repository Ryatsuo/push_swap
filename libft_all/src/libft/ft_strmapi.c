// Copie une chaine dans une autre avec malloc en appliquant une fonction 
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	len_s;
	size_t	i;
	char	*tab;

	i = 0;
	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	tab = malloc(sizeof(char) * (len_s + 1));
	if (!tab)
		return (NULL);
	while (i < len_s)
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
char	ft_tolower_even(unsigned int a, char b)
{
	if (a % 2 == 1)
		b -= 32;
	return (b);
}

#include <stdio.h>
int main(void)
{
	char a[] = "coucou les amis";
	printf("%s\n", ft_strmapi(a, ft_tolower_even));
	return (0);
}*/