#include "../../libft.h"

int	process_buffer(char **line, char *buf)
{
	if (buf[0])
	{
		*line = ft_strjoin_gnl(*line, buf);
		if (!*line)
			return (-1);
		if (ft_strchr_gnl(buf, '\n'))
		{
			ft_clean_buf(buf);
			return (1);
		}
		ft_clean_buf(buf);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			read_bytes;
	int			status;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		status = process_buffer(&line, buf);
		if (status == 1)
			return (line);
		if (status == -1)
			return (NULL);
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes <= 0)
		{
			if (line && line[0])
				return (line);
			free(line);
			return (NULL);
		}
		buf[read_bytes] = '\0';
	}
}

/*
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
int main (int ac, char **av)
{
	if (ac != 2)
		return (1);
    int fd = open(av[1], O_RDONLY);
    char *lign;

    if (fd < 0)
        return (1);
    while ((lign = get_next_line(fd)) != NULL)
    {
        printf("%s", lign);
        free(lign);
    }
    close(fd);
    return (0);
}*/