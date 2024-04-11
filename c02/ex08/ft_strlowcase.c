#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*copystr;

	copystr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	str = copystr;
	return (str);
}

int	main(void)
{
	char a[] = "III iii123:";
	char b[] = "iiiLOL \t";
	char c[] = "";

	printf("string before: %s, ", a);
	printf("string after locase: %s\n", ft_strlowcase(a));
	printf("string before: %s, ", b);
	printf("string after locase: %s\n", ft_strlowcase(b));
	printf("string before: %s, ", c);
	printf("string after locase: %s\n", ft_strlowcase(c));
	return (0);
}