#include <unistd.h>
void	ft_swap(int *a, int *b)
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

	while (i < size - 1 )
	{

		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			if (i > 0)
			{
				i--;
			}
			
		}
		else
			i++;
	}
}

#include <stdio.h>

int main()
{
	int i = 0;
	int tab[100] = {5,2,1,37,3,6,4,9};

	ft_sort_int_tab(tab, 8);
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
}
