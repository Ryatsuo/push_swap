// Affiche un caractère en choisissant ça sortie
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	int i = 0;
	char a[] = "coucou les amis";
	while (a[i])
	{
		ft_putchar_fd(a[i], 1);
		i++;
	}
	return (0);
}*/