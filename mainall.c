/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:35:22 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/17 15:48:46 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_isalnumb.c
int		main()
{
	printf("%i", ft_isalnumb('-'));
	return (0);
}

ft_isalpha.c
int		main()
{
	printf("%i", ft_isalpha('-'));
	return (0);
}
ft_isascii.c

ft_isdigit.c
int		main(void)
{
	printf("%i", ft_isdigit(51));
	return (0);
}

ft_isprint.c

ft_tolower.c
int		main()
{
	printf("%i", ft_tolower(65));
	return (0);
}

ft_toupper.c
int		main()
{
	printf("%i", ft_toupper(97));
	return (0);
}

ft_putstr.c
int		main()
{
	ft_putstr("hello");
	return (0);
}

ft_strcpy.c
int		main(void)
{
	char *str;
	char src[] = "hey";
	char dest[] = "HELLO";
	str	= ft_strcpy(dest, src);
	printf("%s", str);
	return (0);
}

ft_atoi
int		main(void)
{
	printf("%i", ft_atoi("0009"));
	return (0);
}

ft_strdup
int		main()
{
	char *j;
	j = ft_strdup("hello");
	printf("%s", j);
	return (0);
}

ft_stncpy
int		main(void)
{
	char src[] = "hey";
	char dst[] = "replace";
	size_t i;

	i = strlen(src);
	printf("%s", ft_strncpy(dst, src, i));
	return (0);
}

ft_strcmp
int		main()
{
	char src[] = "hey";
	char dst[] = "replace";

	printf("%d", ft_strcmp(dst, src));
	return (0);
}

ft_strcat.c
#include <stdio.h>
int     main()
{
    char s1[50] = "Good";
    char s2[] = " Morning";
    printf("%s", ft_strcat(s1, s2));
    return (0);
}

or
int main () {
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   ft_strcat(dest, src);

   printf("Final destination string : |%s|", dest);

   return(0);
}

ft_strncat.c
int     main()
{
    char s1[] = "hello";
    char s2[] = " world";
    size_t i;

    i = 2;
    printf("%s", ft_strncat(s1, s2, i));
    return (0);
}

ft_strncpy
int     main()
{
    char s1[] = "bello";
    char s2[] = "aorld";
    size_t i;

    i = 3;
    printf ("%d", ft_strncmp(s1, s2, i));
    return (0);
}

ft_strchr.c
#include <stdio.h>

int main()
{
    char s[] = "hello this is justine";
    int c = 'j';
    printf("%s", ft_strchr(s, c));
    return (0);
}

ft_strdup.c

int		main()
{
	char *str = ft_strdup("justine");
	ft_putstr(str);
}

ft_strrchr.c
#include <stdio.h>

int		main()
{
	char s[] = "hello there everyone";
	int c = 'o';
	printf("%s", ft_strrchr(s, c));
	return (0);
}

ft_strstr.c

#include <stdio.h>

int		main()
{
	char haystack[] = "HelloZJustineBoyer";
	char needle[] = "Justine";
	printf("%s", ft_strstr(haystack, needle));
	return (0);
}

ft_strnstr
int main()
{
	char haystack[] = "helloJustineBoyer";
	char needle[] = "J";
	size_t i;

	i = 6;

	printf("%s", strnstr(haystack, needle, i));
	return (0);
}

ft_memset.c

int main ()
{
	char str[50];
	strcpy(str,"This is string.h library function");
	puts(str);

	ft_memset(str,'$',7);
	puts(str);
    return(0);
}

ft_memcpy.c
int main () {
   const char src[50] = "thisIsMySourceString";
   char dest[50];

   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}

ft_memccpy.c

#include <stdio.h>
int main(void)
{
   char *src = "This is the source string";
   char dest[50];
   char *ptr;
   ptr = (char *) memccpy(dest, src, 'c', strlen(src));
   if (ptr)
   {
      *ptr = '\0';
      printf("The character was found: %s\n", dest);
   }
   else
      printf("The character wasn't found\n");
   return 0;
}


ft_memchr.c
int main(int argc, const char * argv[])
{
    char search[] = "TechOnTheNet";
    char *ptr;

    /* Return a pointer to the first 'N' within the search string */
    ptr = (char*)ft_memchr(search, 'N', strlen(search));

    /* If 'N' was found, print its location (This should produce "10") */
    if (ptr != NULL) printf("Found 'N' at position %ld.\n", 1+(ptr-search));
    else printf("'N' was not found.\n");

    return 0;
}

ft_strlcat.c
int main(void)
{
   char dest[20] = "thing sucks";
   char src[] = "this thing sucks alot";

   strlcat(dest, src, 19);
   printf("%s\n", dest);

   return 0;
}

or
int main()
{
  char dest[5] = "test1";
  char src[10] = "copymenow";
  size_t num = 10;


  printf("%zu\n",strlcat(dest, src , 2 ));
  printf("%s\n", dest);
  return (0);
}


ft_itoa.c
int		main(void)
{
	puts(ft_itoa(101));
	return (0);
}

ft_bzero.c

int main () {


    char str[] = "abcdcdee";
    int c = 6;


    ft_bzero(str, c);
    printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);


   return(0);
}

ft_memcmp.c

int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}

ft_memmove.c
int main ()
{
   char dest[] = ft_strdup("oldstring");
   const char src[]  = "newstring";

   ft_memmove(dest, src, 9);
   printf("%s", dest);
   return(0);
}

ft_strsub.c
int     main()
{
    char j[] = "hello";

    size_t n = 3;
    printf("%s", ft_strsub(j, 1, n));
    return (0);
}

ft_strsplit.c
int	main()
{
  char *res =  "      asdf       qwerty        zxcv";
  char **temp = ft_strsplit(res, ' ');

  int i = 0;
  while (i<3)
  {
    printf("%s\n", temp[i]);
    i++;
  }
  return (0);
}

ft_strtrim.c
int main()
{
	char k[] = "hello \n you \t suck \n ok \t cool";
	printf("%s", ft_strtrim(k));
	return (0);

}

ft_bzero.c
int main()
{
	char s[10] = "xxxxxxxxx";

	ft_putendl("Before test");
	write(1, s, 10);
	ft_bzero(s, 3);
	ft_putendl("After test");
	write(1, s, 10);
	return (0);
}

ft_strnew.c
int		main()
{
	char *str = ft_strnew(7);
	ft_memmove(str, "justine", ft_strlen("justine"));
	puts(str);
	return (0);
}

ft_strclr
#include <stdio.h>
int main()
{
	char testclr[11] = "helloWorld";
	printf("%s", ft_strclr(testclr));
	return (0);
}

ft_strequ
int main()
{
	ft_putnbr(ft_strequ("hello", "bye"));
	ft_putchar('\n');
	ft_putnbr(ft_strequ("Hello", "Hello"));
	ft_putchar('\n');
	return (0);
}

ft_striter
void ft_test(char *str)
{
	int i;
	while (str[i] != '\0')
	{
		write(1, "i", 1);
		i++;
	}
}

int main()
{
	char *s = "hello";
	ft_striter(s, ft_test);
	return(0);
}

ft_striteri
void	fti_toupper(unsigned int i, char *c)
{
	if ('a' <= *c && *c <= 'z')
		*c = *c - 'a' + 'A';
}

int	main()
{
	char testiter[11] = "HelloWorld";
	ft_striteri(testiter, &fti_toupper);
	ft_putendl(testiter);
	return (0);
}
ft_strjoin
int main()
{
	ft_putendl(ft_strjoin("hello", "world"));
	return (0);
}

ft_strlen
int main()
{
	printf("%zu", ft_strlen("hello"));
	return (0);
}

ft_strmap
char	f_toupper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (0);
}

int main()
{
	char testmap[11] = "helloworld";
	ft_putendl(ft_strmap(testmap, &f_toupper));
	return (0);
}

ft_strmapi
char fi_toupper(unsigned int i, char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int main()
{
	char testmapi[22] = "helloworld";
	ft_putendl(ft_strmapi(testmapi, &fi_toupper));
	return (0);
}
