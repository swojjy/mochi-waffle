void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1) || (row == y && column == 1 && x > 1 && y > 1))
				ft_putchar('A');
			else if ((row == 1 && column == x) || (row == y && column == x))
				ft_putchar('C');
			else if (row == 1 || row == y || column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column ++;
		}
		row ++;
		ft_putchar('\n');
	}
}
