void	ft_swap(int *a, int *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{	
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

#include <stdio.h>

int main()
{
	int i = 0;
	int tab[6]= {1,2,3,4,5,6};
	
	ft_rev_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
}
