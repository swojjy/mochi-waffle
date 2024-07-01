#include "../libft/libft.h"
#include <stdio.h>

void	ft_toupper_wrap(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper((int)*c);
}

void	ft_isalpha_wrap(unsigned int i, char *c)
{
	(void)i;
	if (ft_isalpha((int)*c))
		*c = 'A';
	else
		*c = '0';
}
void	ft_addten(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = (*c - 'a' + 10) % 26 + 'a';
	else if (*c >= 'A' && *c <= 'Z')
		*c = (*c - 'A' + 10) % 26 + 'A';
}

void	test_ft_striteri(char const *description, char *s, void (*f)(unsigned int, char*))
{
	ft_striteri(s, f);
	printf("%s:, after function: %s.\n", description, s);
}


int	main(void)
{
	char a[] = "Hakuna Matoto :)";
	char b[] = "Hakuna Matoto :)";
	char c[] = "Hakuna Matoto :)";
	char d[] = "";
	test_ft_striteri("ft_toupper_wrap", a, ft_toupper_wrap);
	test_ft_striteri("ft_isalpha_wrap", b, ft_isalpha_wrap);
	test_ft_striteri("ft_addten", c, ft_addten);
	test_ft_striteri("ft_toupper_wrap for blank str", d, ft_toupper_wrap);
	return 0;
}
