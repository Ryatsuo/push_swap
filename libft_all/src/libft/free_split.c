#include "libft.h"

void	free_split(char **split)
{
	int	i;

	if (split == NULL)
		return;
	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}