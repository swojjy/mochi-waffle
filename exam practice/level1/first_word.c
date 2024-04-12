#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *c)
{
	char *ori_c;

	ori_c = c;
	while ((*c == ' ' || *c == '\t') && *c)
	{	
		c++;
	}
	while (*c != ' ' && *c != '\t' && *c)
	{
		ft_putchar(*c);
		c++;
	}
	ft_putchar('\n');
	c = ori_c;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	first_word(argv[1]);
	return (0);
}
