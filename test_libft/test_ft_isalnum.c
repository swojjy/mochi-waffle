#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isalnum(char c)
{
	if (ft_isalnum(c) && isalnum(c))
		printf("%c is alphanum\n", c);
	else if (!ft_isalnum(c) && !isalnum(c))
		printf("%c is not alphanum\n", c);
	else
		printf("ft_isalnum does not match isalnum\n");
}

int main(void)
{
	test_ft_isalnum('5');
	test_ft_isalnum('!');
	test_ft_isalnum('a');
	test_ft_isalnum('\x90');
	return 0;
}
