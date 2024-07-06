#include "../libft/libft.h"
#include <stdio.h>

void test_ft_split(char const *testname, char const *s, char c)
{
	printf("%s:(s:\"%s\",c:'%c')\n", testname, s, c);
	size_t i = 0;
	char **a = ft_split(s, c);
	if (a)
	{
		while (a[i])
		{
			printf("\"%s\"\n", a[i]);
			free(a[i]);
			i++;
		}
		free(a);
	}
	else
			printf("malloc failed\n");
}

int main(void)
{
	test_ft_split("1. one delimiter at a time", "a bb ccc dddd", ' ');
	test_ft_split("2. multiple delimiters stuck tgt", "a     bb   ccc   dddd", ' ');
	test_ft_split("2.5 space at beginning and end", " a b c ", ' ');
	test_ft_split("3. no delimiters", "abbccadsldsk", ' ');
	test_ft_split("4. empty str", "", ' ');
	test_ft_split("5. only delimiters", "    ", ' ');
	return 0;
}