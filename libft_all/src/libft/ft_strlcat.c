// Concatène 2 chaines avec une longueur maximum pour dst
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	if (dsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dsize <= len_dst)
		return (len_src + dsize);
	while (src[i] && (i + len_dst) < (dsize - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_src + len_dst);
}

/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	char des[30]; memset(dest, 0, 30);
	char * sr = (char *)"AAAAAAAAA";
	ft_strlcat(dest, src, 0);
	strlcat(des, sr, 0); 
	printf("la chaine concatene : %s\n", dest);
	printf("la chaine concatene : %s\n", des);
	return (0);
}*/
