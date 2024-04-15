#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *f;

	if (*to_find == '\0')
		return str;
	while (*str)
	{
		s = str;
		f = to_find;
		while (*f == *s)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return str;
		str++;
	} 
	return NULL;
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("enter <str to search> <str to find>");
		return (1);
	}
	else
	{
		printf("ex02: is in haystack? %s\n", ft_strstr(argv[1], argv[2]));
		printf("strstr: is in haystack? %s\n", strstr(argv[1], argv[2]));
		//printf("length of str to find: %d\n", ft_strlen(argv[2]));
		//printf("match? %d\n", ft_ismatch(&argv[1][1], argv[2]));
		return 0;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	ft_strlen(char *f)
{
	int	i;

	i = 0;
	while (f[i])
		i++;
	return (i);
}

int	ft_ismatch(char *s, char *f)
{
	int	len;

	len = ft_strlen(f);
	while (*s && *f && len-- > 0)
	{
		if (*s++ != *f++)
			return (0);
	}
	return (1);
}
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	//int	j;

	i = 0;
	//j = ft_strlen(to_find);
	while (str[i])
	{
		if(ft_ismatch(str, to_find))
			return (&str[i]);
		i++;
	}
	return ("\0");
}
*/