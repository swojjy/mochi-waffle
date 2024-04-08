#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a, b, divide, modulo;

	printf("enter the dividend: \n");
	scanf("%d", &a);
	printf("enter the divisor: \n");
	scanf("%d", &b);
	ft_div_mod(a, b, &divide, &modulo);
	printf("%d divided by %d is %d, %d modulo %d is %d\n", a, b, divide, a, b, modulo);
	return (0);
}
