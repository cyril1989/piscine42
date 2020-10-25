#include <unistd.h>

void	ft_putchar(char i, char j, char k, char l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!( i == '9' && j == '8' && k == '9' && l == '9'))
		write(1, ", ", 1);
}
void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (i < j && j <= 99)
		{
		ft_putchar(i / 10 + '0', i % 10 + '0', j / 10 + '0', j % 10 + '0');
		j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	write(1, "\n", 1);
	return(0);
}

