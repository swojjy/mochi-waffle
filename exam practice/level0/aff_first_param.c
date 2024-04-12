#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	aff_first_param(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc < 1)
		ft_putchar('\n');
	aff_first_param(argv[1]);
	return (0);
}
