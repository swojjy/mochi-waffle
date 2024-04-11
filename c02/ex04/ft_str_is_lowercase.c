#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "yo mama";
	char str1[] = "YO MAMA";
	char str2[] = "";
	char str3[] = "yomamabb";

	printf("string: %s, lowercase or empty? %d\n", str, ft_str_is_lowercase(str));
	printf("string: %s, lowercase or empty? %d\n", str1, ft_str_is_lowercase(str1));
	printf("string: %s, lowercase or empty? %d\n", str2, ft_str_is_lowercase(str2));
	printf("string: %s, lowercase or empty? %d\n", str3, ft_str_is_lowercase(str3));
	return (0);
}
