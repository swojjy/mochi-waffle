#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int file = open("test2.txt", O_WRONLY | O_CREAT | O_TRUNC | 0644);
	if (file == -1)
	{
		perror("failed to open file");
		return 1;
	}
	ft_putendl_fd("its a bug's life :)", file);
	ft_putendl_fd("flik and hopper sittin in a tree", file);
	ft_putendl_fd("", file);
	close(file);
	file = open("test2.txt", O_RDONLY);
	if (file == -1)
	{
		perror("failed to open for reading");
		return 1;
	}
	char a[300];
	ssize_t len = read(file, a, sizeof(a) - 1);
	if (len == -1)
	{
		perror("failed to read");
		close(file);
		return 1;
	}
	a[len] = '\0';
	printf("file says:\n%s", a);
	close(file);
	return 0;
}
