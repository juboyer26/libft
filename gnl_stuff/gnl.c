#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 10

//m = start index
//n = length
char* strsub(const char *src, int m, int n)
{
	// get length of the destination string
	int len = n - m;

	// allocate (len + 1) chars for destination (+1 for extra null character)
	char *dest = (char*)malloc(sizeof(char) * (len + 1));

	// extracts characters between m'th and n'th index from source string
	// and copy them into the destination string
	for (int i = m; i < n && (*src != '\0'); i++)
	{
		*dest = *(src + i);
		dest++;
	}

	// null-terminate the destination string
	*dest = '\0';

	// return the destination string
	return dest - len;
}

char *strjoin(const char* s1, const char* s2)
{
    char* result = malloc(strlen(s1) + strlen(s2) + 1);

    if (result) // thanks @pmg
    {
        strcpy(result, s1);
        strcat(result, s2);
    }

    return result;
}

char *strnew(size_t size)
{
	char *ret;

	ret = malloc(size + 1);
	memset(ret, '\0', size + 1);
	return (ret);
}

int	read_from_file(int fd, char **storage)
{
	char buffer[BUFF_SIZE + 1];
	int		bytes_read;

	memset(buffer, '\0', BUFF_SIZE + 1);
	while (!strchr(buffer, '\n'))
	{
		bytes_read = read(fd, buffer, BUFF_SIZE);
		if (bytes_read == 0)
			return (0);
		buffer[bytes_read] = '\0';
		*storage = strjoin(*storage, buffer);
	}

	return (bytes_read);
}

void dispense_line(char **storage, char **line)
{
	char *str;
	char *newline;

	newline = strchr(*storage, '\n');
	if (newline == NULL)
	{
		*line = *storage;
		*storage = strnew(0);
	}
	else
	{
		*line = strsub(*storage, 0, newline - *storage);
		str = strsub(newline, 1, strlen(newline));
		free(*storage);
		*storage = str;
	}
}


int	get_next_line(int fd, char **line)
{
	static char *storage = NULL;
	if (!storage)
		storage = strnew(0);
	if (read_from_file(fd, &storage) == 0)
		return (0);
	*line = strdup(storage);
	dispense_line(&storage, line);
	return (1);
}

int main(int ac, char **av)
{
	if (ac < 2)
		return 0;
	char *line;
	int fd;
	fd = open (av[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
		free(line);
	}
}
