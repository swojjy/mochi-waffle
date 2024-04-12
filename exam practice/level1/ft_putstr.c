#include <unistd.h>

void	ft_putstr(char *str)
{
	//char	*tempystr;

	//tempystr = str;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	//*str = tempystr;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_putstr(argv[1]);
	return (0);
}
