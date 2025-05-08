// Applique une fonction sur une chaine de caractère
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_tolower_even(unsigned int a, char *b)
{
	if (b[a] % 2 == 1)
		b[a] -= 32;
}

#include <stdio.h>
int main ()
{
	char a[] = "coucou les amis";
	ft_striteri(a, ft_tolower_even);
	printf("%s", a);
	return (0);
}*/