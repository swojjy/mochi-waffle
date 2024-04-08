#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divided;
	int	modulo;

	divided = *a / *b;
	modulo = *a % *b;
	*a = divided;
	*b = modulo;
}

int	main(void)
{
	int	a, b;

	printf("dividend: \n");
	scanf("%d", &a);
	printf("divisor: \n");
	scanf("%d", &b);
	printf("a is %d, b is %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a / b is %d, a / b = %d\n", a, b);
	return (0);
}
