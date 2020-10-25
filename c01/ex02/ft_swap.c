#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main ()
{
	int a = 42;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	
	ft_swap(&b, &a);
	printf ("a = %d, b = %d\n", a, b);
	return 0;
}
