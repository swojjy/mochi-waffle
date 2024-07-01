#include "../libft/libft.h"
#include <stdio.h>

char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

char	ft_toupper_wrap(unsigned int i, char c)
{
	(void)i;
	return (char)ft_toupper((int)c);
}

char	ft_isalpha_wrap(unsigned int i, char c)
{
	(void)i;
	if (ft_isalpha((int)c))
		return ('A');
	else
		return ('0');
}
char	ft_addten(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return ((c - 'a' + 10) % 26 + 'a');
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A' + 10) % 26 + 'A');
	return c;
}

void	test_ft_strmapi(char const *description, char const *s, char (*f)(unsigned int, char))
{
	char *result = ft_strmapi(s, f);
	if (result)
	{
		printf("%s:, og str: %s, after function: %s.\n", description, s, result);
		free(result);
	}
	else
		printf("malloc failed\n");
}


int	main(void)
{
	const char *a = "Hakuna Matoto :)";
	const char *b = "";
	test_ft_strmapi("ft_toupper_wrap", a, ft_toupper_wrap);
	test_ft_strmapi("ft_isalpha_wrap", a, ft_isalpha_wrap);
	test_ft_strmapi("ft_addten", a, ft_addten);
	test_ft_strmapi("ft_toupper_wrap for blank str", b, ft_toupper_wrap);
	return 0;
}
