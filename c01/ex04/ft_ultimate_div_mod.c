void	ft_ultimate(int *a, int *b)
{
	int div;
	int mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;

}

#include <stdio.h>

int main()
{

	int a = 8;
	int b = 2;
	int *div = &a;
	int *mod = &b;
	printf("a = %d\nb = %d\n", a , b);
	ft_ultimate(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
}
