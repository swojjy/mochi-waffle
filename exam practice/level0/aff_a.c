#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	aff_a(char *str)
{
	if (*str == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	while (*str)
	{
		if (*str == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return (1);
		}
		str++;
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	aff_a(argv[1]);
	return (0);
}
