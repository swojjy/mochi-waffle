#include "../libft/libft.h"
#include <stdio.h>
#include <ctype.h>

void test_ft_isdigit(char c)
{
	if (ft_isdigit(c) && isdigit(c))
		printf("%c is digit\n", c);
	else if (!ft_isdigit(c) && !isdigit(c))
		printf("%c is not digit\n", c);
    else
        printf("%c: ft_isdigit is different from isdigit\n", c);
}

int	main(void)
{
  test_ft_isdigit('4');
  test_ft_isdigit('a');
  test_ft_isdigit('Z');
  test_ft_isdigit('\t');
  test_ft_isdigit('\0');
  test_ft_isdigit('!');
	
	return 0;
}
