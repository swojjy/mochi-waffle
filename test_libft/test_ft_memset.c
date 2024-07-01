#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[5];
	char b[5];
	size_t i = 0;

	memset(a, 'A', sizeof(a));
	ft_memset(b, 'A', sizeof(b));
    printf("memset:\n");
	while (i < sizeof(a))
	{
		printf("%c\n", a[i]);
		i++;
	}
    printf("\nft_memset:\n");
	i = 0;
	while (i < sizeof(b))
	{
		printf("%c\n", b[i]);
		i++;
	}
	return 0;
}