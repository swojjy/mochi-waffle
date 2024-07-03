#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>
#include <limits.h>

/*


int	main(void)
{
	char s[] = "weeweewoowoo";
	char t[] = "weeweewoowoo";
	printf("%s\n%s\n", s, t);
	ft_bzero(s, 3);
	bzero(t, 3);
	printf("%s\n%s\n", s, t);
	printf("%s\n", s+3);
	return 0;
}

int main(void)
{
	char c = 'o';
	char ce = 'o';
	char cee = '\'';
	char ceee = '\'';
	printf("toupper a: %c, ft_toupper a: %c.\n", toupper(c), ft_toupper(ce));
	printf("toupper 0: %c, ft_toupper 0: %c.\n", toupper(cee), ft_toupper(ceee));
	return 0;
} 

int main(void)
{
	char c = 'P';
	char ce = 'P';
	char cee = '\'';
	char ceee = '\'';
	printf("tolower P: %c, ft_tolower P: %c.\n", tolower(c), ft_tolower(ce));
	printf("tolower \': %c, ft_tolower \': %c.\n", tolower(cee), ft_tolower(ceee));
	return 0;
} 

int main(void)
{
	const char *a = "abc\x80";
	const char *b = "abcd\x8A";
	int i = 1;
	printf("ft_strncmp: a - b = %d. strncmp a - b = %d.\n", ft_strncmp(a, b, i), strncmp(a, b, i));
} 

int main(void)
{
	const char *s = "a";
	char a = 'a';
	printf("memchr:%s, ft_memchr:%s.\n", (char *)memchr(s, a, 1), (char *)ft_memchr(s, a, 1));
	return 0;
} 

int main(void)
{
	const char *a = "\0abcd\x00";
	const char *b = "\0abcd\xFF";
	size_t len = -2;
	printf("memcmp:%d, ft_memcmp:%d.\n", memcmp(a, b, len), ft_memcmp(a, b, len));
	return 0;
} 

int main(void)
{
	const char *a = "";
	const char *b = "ri";
	size_t len = 10;
	printf("strnstr:%s, ft_strnstr:%s.\n", strnstr(a, b, len), ft_strnstr(a, b, len));
	return 0;
}

int main(void)
{
	char *a = "    -214748364 8";
	printf("%d, %d, atoi:%d, ft_atoi:%d.\n", INT_MAX, INT_MIN, atoi(a), ft_atoi(a));
	return 0;
} 

void	test_ft_strdup(const char *a)
{
	char *b = ft_strdup(a);
	char *c = strdup(a);
	if (b != NULL)
	{
		printf("ft_strdup:%s.\n", b);
		free(b);
	}
	else
		printf("allocation failed for ft_strdup\n");
	if (c != NULL)
	{
		printf("strdup:%s.\n", c);
		free(c);
	}
	else
		printf("allocation failed for strdup\n");
}

int main(void)
{
	test_ft_strdup("");
	//test_ft_strdup(NULL); //strdup segfaults with NULL string
	test_ft_strdup("wee");
	char *a = (char *)malloc(1000);
	if (a)
	{
		ft_memset(a, 'a', 999);
		a[999] = '\0';
		test_ft_strdup(a);
		free(a);
	}
	else
		printf("failed mem allocation for v long string\n"); 
	return 0;
} 

int main(void)
{
	char *a = "wee";
	char *b = "woo";
	char *c = ft_strjoin(a, b);
	if (c)
	{
		printf("%s\n", c);
		free (c);
	}
	else
		printf("malloc failed");
	return 0;
} 
*/

void test_ft_strtrim(char const *s1, char const *set)
{
	char *str = ft_strtrim(s1, set);
	if (str)
	{
		printf("s1:%s, set:%s, trimmed:%s.\n", s1, set, str);
		free(str);
	}
	else
		printf("malloc failed or null input strs\n");
}

int main(void)
{
	test_ft_strtrim("  abc     ", " ");
	test_ft_strtrim("   ab c   ", " ");
	test_ft_strtrim("   abc def   ", " cba");
	test_ft_strtrim(" abc ", "");
	test_ft_strtrim("hiellow", "hielwo");
	test_ft_strtrim("", " ");
	test_ft_strtrim(NULL, " ");
	test_ft_strtrim("abc", NULL);

	return 0;
} 
