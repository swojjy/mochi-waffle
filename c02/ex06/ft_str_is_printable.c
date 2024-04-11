#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 33 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char poopy[] = "lalala";
	char poopy1[] = "LALALA\n";
	char poopy2[] = "\t";
	char poopy3[] = "";

	printf("str: %s, printable only? %d\n", poopy, ft_str_is_uppercase(poopy));
	printf("str: %s, printable only? %d\n", poopy1, ft_str_is_uppercase(poopy1));
	printf("str: %s, printable only? %d\n", poopy2, ft_str_is_uppercase(poopy2));
	printf("str: %s, printable only? %d\n", poopy3, ft_str_is_uppercase(poopy3));

	return (0);
}
