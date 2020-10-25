void	ft_swap(int *a,  int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size) 
{
	int i;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
		if (i > 0)
		{
			i -- ;
		}
		}
		
			i++;
	}
}

#include <stdio.h>

int main ()
{
	char var[5] = {5, 3, 4, 2, 1};
	int i = 0;
	ft_sort_int_tab(var, 5);
	while (i < 5)
	{
		printf("%d", var[i]);
		i++;
	}
}










