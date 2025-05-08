// Affiche une chaine de caractère avec ça sortie + \n
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
int main(void)
{
	char a[] = "coucou les amis";
	ft_putendl_fd(a, 1);
	return (0);
}*/