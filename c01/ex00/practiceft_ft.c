#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	checky;
	int	*poinder;

	checky = 1;
	poinder = &checky;

	printf("before ft_ft, checky is %d\n", checky);
	ft_ft(poinder);

	printf("after ft_ft, check is %d", checky);
	return (0);
}
