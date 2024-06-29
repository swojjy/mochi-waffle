#include "libft.h"
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
	char c = '4';
	if (ft_isalpha(c) && isalpha(c))
		printf("%c is alphabet\n", c);
	else
		printf("%c is not alphabet\n", c);
	return 0;
}

int	main(void)
{
	char c = '4';
	if (ft_isdigit(c) && isdigit(c))
		printf("%c is digit\n", c);
	else
		printf("%c is not digit\n", c);
	return 0;
}

int	main(void)
{
	char c = '5';

	if (ft_isalnum(c) && isalnum(c))
		printf("%c is alphanumeric", c);
	else
		printf("%c is not alphanumeric", c);
	return 0;
}

int	main(void)
{
	char c = '*';

	if(ft_isascii(c) && isascii(c))
		printf("%c is ascii\n", c);
	else
		printf("%c is not ascii\n", c);
	return 0;
}

int	main(void)
{
	char c = ' ';
	if (ft_isprint(c) && isprint(c))
		printf("%c is prindabel\n", c);
	else
		printf("%c is not printable\n", c);
	return 0;
}

int	main(void)
{
	const char *s = "bloop bloop wee";
	printf("length of %s is %zu and %zu\n", s, ft_strlen(s), strlen(s));
	return 0;
}

int	main(void)
{
	char a[5];
	char b[5];
	int i = 0;

	memset(a, 'A', 0);
	ft_memset(b, 'A', 0);

	while (i < 5)
	{
		printf("%c", a[i]);
		i++;
	}

	i = 0;
	printf("\n");
	while (i < 5)
	{
		printf("%c", b[i]);
		i++;
	}
	return 0;
}

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
	char a[] = "wee";
	//char b[] = "wee";
	//char c[] = 0;
	char d[30];
	char d1[30];

	ft_memcpy(d, a, strlen(a) + 1);
	memcpy(d1, a, strlen(a) + 1);

	printf("%s, %s\n", d, d1);
	return 0;
}

int main(void)
{
	char a[] = "abc";
	char b[] = "abc";
	memmove(a , a+1, 0);
	ft_memmove(b , b+1, 0);
	printf("memmove:%s, ft_memmove:%s.\n", a, b);
	return 0;
}

int main(void)
{
	char dest[4] = "";
	const char src[] = "wee";
	//printf("src length:%zu; ft_strlcpy:%zu;\n", ft_strlen(src), ft_strlcpy(dest, src, sizeof(dest)));
	//printf("ft_strlcpy: dest:%s, src:%s.\n", dest, src);
	printf("src length:%lu; ft_strlcpy:%lu;\n", ft_strlen(src), ft_strlcpy(dest, src, ft_strlen(dest)));
	printf("ft_strlcpy: src:%s,dest:%s.\n", src, dest);
}

int main(void)
{
	char dst[10] = "abc";
	const char src[] = "def";
	char dst1[10] = "abc";
	const char src1[] = "def";
	printf("strlcat: %lu, ft_strlcat: %lu.\n", strlcat(dst, src, 11), ft_strlcat(dst1, src1, 11));
	printf("strlcat dest: %s, ft_strlcat dest: %s.\n", dst, dst1);
	printf("strlcat dest len: %lu, ft_strlcat dest len: %lu.\n", ft_strlen(dst), ft_strlen(dst1));

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
	const char *c = "we.wewe.weo";
	char sep = ',';
	printf("strchr:%s, ft_strchr:%s.\n", strchr(c, sep), ft_strchr(c, sep));
	return 0;
}

int main(void)
{
	const char *c = "we.we.we.we";
	char find = 'z';
	printf("strrchr:%s, ft_strrchr:%s.\n", strrchr(c, find), ft_strrchr(c, find));
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
	/*char *a = (char *)malloc(10000);
	if (a)
	{
		ft_memset(a, 'a', 9999);
		a[9999] = '\0';
		test_ft_strdup(a);
		free(a);
	}
	else
		printf("failed mem allocation for v long string\n"); */
	return 0;
}*/


