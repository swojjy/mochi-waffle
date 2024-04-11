#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "123";
	char	str1[] = "123!";
	char	str2[] = "abc";

	printf("string: %s, 1 if only num, 0 if other character: %d\n", str, ft_str_is_numeric(str));
	printf("string: %s, num or other char: %d\n", str1, ft_str_is_numeric(str1));
	printf("string: %s, num or other char: %d\n", str2, ft_str_is_numeric(str2));
	return (0);
}
