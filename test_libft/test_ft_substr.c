#include "../libft/libft.h"
#include <stdio.h>

void test_ft_substr(char const *s, unsigned int start, size_t len)
{
	char *a = ft_substr(s, start, len);
	if (a)
	{
		printf("%s, %d, %ld; %s, %ld\n", s, start, len, a, ft_strlen(a));
		free(a);
	}
	else
		printf("allocation failed");
}

int main()
{
    test_ft_substr("bloopidybloop", 3, 4);
    test_ft_substr("bloopidybloop", 10, 17);
    test_ft_substr("bloopidybloop", -3, 4);
    test_ft_substr("bloopidybloop", 200, 4);    

    return 0;
}
