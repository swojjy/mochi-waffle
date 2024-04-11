#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char poopy[] = "lalala";
	char poopy1[] = "LALALA";
	char poopy2[] = "LA !";
	char poopy3[] = "";

	printf("str: %s, uppercase only? %d\n", poopy, ft_str_is_uppercase(poopy));
	printf("str: %s, uppercase only? %d\n", poopy1, ft_str_is_uppercase(poopy1));
	printf("str: %s, uppercase only? %d\n", poopy2, ft_str_is_uppercase(poopy2));
	printf("str: %s, uppercase only? %d\n", poopy3, ft_str_is_uppercase(poopy3));

	return (0);
}
