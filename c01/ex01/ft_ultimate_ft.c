#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	i;
	int	*n1;
	int	**n2;
	int	***n3;
	int	****n4;
	int	*****n5;
	int	******n6;
	int	*******n7;
	int	********n8;
	int	*********n9;

	i = 1;

	n1 = &i;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;

	ft_ultimate_ft(n9);
	printf("%d", i);
	return (0);
}
