#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	nbr;
	int	*ptr;

	ptr = &nbr;

	ft_ft(ptr);
	printf("%d", nbr);
	return(0);
} 
