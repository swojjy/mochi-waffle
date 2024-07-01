#include "../libft/libft.h"
#include <stdio.h>
#include <limits.h>

void test_ft_itoa(char const *testname, int n)
{
	char *a = ft_itoa(n);
	if (a)
	{
		printf("%s: %d: %s\n", testname, n, a);
		free(a);
	}
	else
		printf("malloc failed\n");
}

int main(void)
{
	test_ft_itoa("normal int", 4545);
	test_ft_itoa("neg", -553322);
	test_ft_itoa("zero", 0);
	test_ft_itoa("max int", INT_MAX);
	test_ft_itoa("min int", INT_MIN);
	return 0;
}