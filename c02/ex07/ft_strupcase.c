#include <stdio.h>

/*
char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "III iii123:";
	char b[] = "iiiLOL \t";
	char c[] = "";

	printf("string before: %s, ", a);
	ft_strupcase(a);
	printf("string after upcase: %s\n", a);
	printf("string before: %s, ", b);
	ft_strupcase(b);
	printf("string after upcase: %s\n", b);
	printf("string before: %s, ", c);
	ft_strupcase(c);
	printf("string after upcase: %s\n", c);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "III iii123:";
	char b[] = "iiiLOL \t";
	char c[] = "";

	printf("string before: %s, ", a);
	printf("string after upcase: %s\n", ft_strupcase(a));
	printf("string before: %s, ", b);
	printf("string after upcase: %s\n", ft_strupcase(b));
	printf("string before: %s, ", c);
	printf("string after upcase: %s\n", ft_strupcase(c));
	return (0);
}
*/

char	*ft_strupcase(char *str)
{
	char	*copystr;

	copystr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
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
	printf("string after upcase: %s\n", ft_strupcase(a));
	printf("string before: %s, ", b);
	printf("string after upcase: %s\n", ft_strupcase(b));
	printf("string before: %s, ", c);
	printf("string after upcase: %s\n", ft_strupcase(c));
	return (0);
}