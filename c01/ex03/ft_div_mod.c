#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10; 
	b = 5;
//	div = &a;
//	mod = &b;

	printf("a = %d\nb = %d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("div = %d\nmod= %d\n", *div, *mod);
	return(0);
}
