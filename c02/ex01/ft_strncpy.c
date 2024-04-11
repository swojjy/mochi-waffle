#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	n1;
	//char			*temp_dest;

	n1 = 0;
	//temp_dest = dest;
	while (n1 < n && *src)
	{
		*dest++ = *src++;
		n1++;
	}
	while (n1 < n)
	{
		*dest++ = '\0';
		n1++;
	}
	return (/*temp_*/dest);
}

int	main(void)
{
	unsigned int	len = 100;
	char			src[] = "wheee boing boingo boing :):)";
	char			dest[3000] = "";

	printf("Before, source is %s, dest is %s, copied %d characters\n", src, dest, len);
	ft_strncpy(dest, src, len);
	printf("after, source is %s, dest is %s, copied %d characters\n", src, dest, len);
	return (0);
}