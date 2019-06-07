/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:35:22 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/07 08:06:02 by juboyer          ###   ########.fr       */
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
	char dest[100];

    printf("%s", ft_strcpy(dest,"hello" ));
	return (0);
}
or
int		main(void)
{
	char *str;
	char s1[] = "hey";
	char s2[] = "HELLO";
	str	= ft_strcpy(s1, s2);
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
   const char src[50] = "http://www.tutorialspoint.com";
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

ft_memcpy.c 
§:wq
int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
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
int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

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
