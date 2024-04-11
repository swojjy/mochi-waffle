#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter])
	{
		if (str[counter] < 'A')
			return (0);
		else if (str[counter] > 'Z' && str[counter] < 'a')
			return (0);
		else if (str[counter] > 'z')
			return (0);
		else
			return (1);
		counter++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "pewpy";
	char	str1[] = "123 pooop!";
	char	str2[] = "";
	
	printf("word: %s, if blank or only alpha: %d\n", str, ft_str_is_alpha(str));
	printf("word: %s, if blank or only alpha: %d\n", str1, ft_str_is_alpha(str1));
	printf("word: %s, if blank or only alpha: %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}
