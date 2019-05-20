#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		main(void)
{
	char i = ft_strlen("hello world");
	printf("%d\n", i);
	return (0);
}
