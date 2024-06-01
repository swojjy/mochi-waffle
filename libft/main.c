#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <strings.h>

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

*/