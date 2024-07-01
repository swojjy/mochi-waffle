#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isascii(char c)
{
    if (ft_isascii(c) && isascii(c))
		printf("%c is ascii\n", c);
	else if (!ft_isascii(c) && !isascii(c))
		printf("%c is not ascii\n", c);
  else
    printf("%c: ft_isascii is different from isascii\n", c);
}

int	main(void)
{
	  test_ft_isascii('4');
    test_ft_isascii('a');
    test_ft_isascii('Z');
    test_ft_isascii('\t');
    test_ft_isascii('\0');
    test_ft_isascii('!');
    test_ft_isascii(255);
    test_ft_isascii(128);

	return 0;
}