#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isprint(char c)
{
    if (ft_isprint(c) && isprint(c))
		printf("%c is printable\n", c);
	else if (!ft_isprint(c) && !isprint(c))
		printf("%c is not printable\n", c);
  else
    printf("%c: ft_isprint is different from isprint\n", c);
}

int	main(void)
{
	  test_ft_isprint('4');
    test_ft_isprint('a');
    test_ft_isprint('Z');
    test_ft_isprint('\t');
    test_ft_isprint('\0');
    test_ft_isprint('!');
    test_ft_isprint(255);
    test_ft_isprint(128);

	return 0;
}