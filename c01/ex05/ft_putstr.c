#include <unistd.h>

void	ft_putstr(char *str)
{
	int	str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		write (1, &str[str_length], 1);
		str_length++;
	}
}

int	main(void)
{
	char	*str;

	str = "bloop bloop";
	ft_putstr(str);
	return (0);
}
