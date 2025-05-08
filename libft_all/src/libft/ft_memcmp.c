//Compare deux chaine de caractère et renvoie la différence jusqu'a n carac
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main (void)
{
	char a[] = "coucou les amis";
	char b[] = "coucou les copain";
	printf("%d\n", ft_memcmp((unsigned char *)a, (unsigned char *)b, 20));
	printf("%d\n", ft_memcmp((unsigned char *)a, (unsigned char *)b, 10));
	return (0);
}*/