#include <unistd.h>

int	aff_a2(char *c)
{
	while (*c)
	{
		if (*c == 'a')
		{
			write(1, "a\n", 2);
		       return (1);	
		}
		c++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	aff_a2(argv[1]);
	return (0);
}
