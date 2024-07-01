#include "../libft/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	printf("write to std output: fd = 1:\n");
	ft_putchar_fd('A', 1);
	
	printf("\nwrite to std error: fd = 2:\n");
	ft_putchar_fd('1', 2);

	printf("\nwrite to a file\n");
	int	file = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file == -1)
	{
		write(2, "open file failed\n", 17);
		return 1;
	}
	ft_putchar_fd('A', file);
	close(file);
	return 0;
}
