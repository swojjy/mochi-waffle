#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_strchr(const char *s, int c)
{
	char *a = strchr(s, c);
	char *b = ft_strchr(s, c);
	if (a == b)
		printf("%s: strchr: %s, ft_strchr: %s.\n", s, a, b);
	else
		printf("%s: doesnt match\n", s);
}

int	main(void)
{
	test_ft_strchr("abcda", 'a');
	test_ft_strchr("abced", 'b');
	test_ft_strchr("sdlskdjfl", '\0');
	test_ft_strchr("abcd", '#');
	test_ft_strchr("abcde", 300);
	test_ft_strchr("", 'a');
	test_ft_strchr("abcd", -1);
	//test_ft_strchr("abc", '');
	return 0;
}
