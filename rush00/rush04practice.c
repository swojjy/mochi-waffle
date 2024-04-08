void	ft_putchar(char c);

void	rush(int i, int j) //i=row length, j=column length
{
	int	row_counter;
	int	column_counter;

	row_counter = 1;
	while (row_counter <= j)
	{
		column_counter = 1;
		while (column_counter <= i)
		{
			if ((row_counter == 1 && column_counter == 1) || (row_counter == j && column_counter == i && row_counter > 1 && column_counter > 1))
				ft_putchar('A');
			else if ((row_counter == 1 && column_counter == i) || (row_counter == j && column_counter == 1))
				ft_putchar('B');
			else if (row_counter == 1 || column_counter == 1 || row_counter == j || column_counter == i)
				ft_putchar('C');
			else
				ft_putchar(' ');
			column_counter ++;
		}
		ft_putchar('\n');
		row_counter ++;
	}
}
