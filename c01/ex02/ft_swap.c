#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_value;

	temp_value = *a;
	*a = *b;
	*b = temp_value;
}

int	main(void)
{
	int	i;
	int	j;

	i = 42;
	j = 24;

	printf("before swap, i is %d and j is %d\n", i, j);
	ft_swap(&i, &j);
	printf("after swap, i is %d and j is %d\n", i, j);

	return (0);
}
