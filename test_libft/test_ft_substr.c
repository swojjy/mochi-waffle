#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_substr(char const *s, unsigned int start, size_t len)
{
	char *a = ft_substr(s, start, len);
	if (a)
	{
		printf("%s, %u, %zu: \"%s\", length of substr: %zu\n", s, start, len, a, ft_strlen(a));
		free(a);
	}
}

int main(void)
{
	test_ft_substr("weeweewoowoo", 3, 3);
	test_ft_substr("", 0, 0);
	test_ft_substr("", 0, 1);
	test_ft_substr("", 1, 1);
	test_ft_substr("abcd", -1, 0);
	test_ft_substr("abcd", 0, -1);
	test_ft_substr("abcd", 0, 0);
	test_ft_substr("abcd", -1, -1);
	test_ft_substr("abcd", -123423, -13434333);
	test_ft_substr("abcd", 0, 1);
	test_ft_substr("abcd", 0, 3);
	test_ft_substr("abcd", 0, 6);
	test_ft_substr("abcd", 5, 4);
	test_ft_substr("abcd", 3, 0);
	test_ft_substr("abcd", 3, 3);
	test_ft_substr("abcd", 1, 1);
	test_ft_substr("abcd", 1, 5);
	test_ft_substr("abcd", 1, 50000000000000);
	test_ft_substr("abcd", 1241513984, 50000000000000);
	return 0;
}
