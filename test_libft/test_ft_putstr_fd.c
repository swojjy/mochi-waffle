#include "../libft/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char *a = "wee wee woo woo!!";
	int file = open("test1.text", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file == -1)
	{
		perror("file open failed");
		return 1;
	}
	ft_putstr_fd(a, file);
	close(file);
	file = open("test1.txt", O_RDONLY);
	if (file == -1)
	{
		perror("file open failed");
		return 1;
	}
	char b[500];
	ssize_t copied = read(file, b, sizeof(b) - 1);
	if (copied == -1)
	{
		perror("file read failed");
		close(file);
		return 1;
	}
	b[copied] = '\0';
	printf("file contents: %s\n", b);
	close(file);
	return 0;
}
