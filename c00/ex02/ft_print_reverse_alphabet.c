#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char i; 
	char j; 
 
	i = 'z';
	j = 'a';
	while (i >= j)
	{
		write(1, &i, 1);
		i--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}		
