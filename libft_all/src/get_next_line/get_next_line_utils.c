#include "../../libft.h"

size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

void	copy_lines(char *new, char *line, size_t *i)
{
	while (line && line[*i])
	{
		new[*i] = line[*i];
		(*i)++;
	}
}

char	*ft_strjoin_gnl(char *line, const char *buf)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = malloc(ft_strlen_gnl(line) + ft_strlen_gnl(buf) + 1);
	if (!new)
	{
		free(line);
		return (NULL);
	}
	i = 0;
	j = 0;
	copy_lines(new, line, &i);
	while (buf[j])
	{
		new[i + j] = buf[j];
		if (buf[j++] == '\n')
			break ;
	}
	new[i + j] = '\0';
	free(line);
	return (new);
}

void	ft_clean_buf(char *buf)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
	{
		i++;
		while (buf[i])
			buf[j++] = buf[i++];
	}
	while (j < BUFFER_SIZE + 1)
		buf[j++] = '\0';
}
