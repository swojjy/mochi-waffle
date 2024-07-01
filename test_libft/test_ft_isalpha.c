#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isalpha(char c)
{
    if (ft_isalpha(c) && isalpha(c))
		printf("%c is alphabet\n", c);
	else if (!ft_isalpha(c) && !isalpha(c))
		printf("%c is not alphabet\n", c);
    else
        printf("%c: ft_isalpha is different from isalpha\n", c);
}

int	main(void)
{
	test_ft_isalpha('4');
    test_ft_isalpha('a');
    test_ft_isalpha('Z');
    test_ft_isalpha('\t');
    test_ft_isalpha('\0');
    test_ft_isalpha('!');
	
	return 0;
}