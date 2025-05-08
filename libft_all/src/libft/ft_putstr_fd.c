// Affiche une chaine de caractère en choisissant ça sortie
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char a[] = "coucou les amis";
	ft_putstr_fd(a, 1);
	return (0);
}*/