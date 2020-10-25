#include <unistd.h>

char	ft_strcpy(char *dest, char *src);
{
	int i;
	i = 0;
	while (src[i] =! '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return dest[i];
}

int main()
{
	char b[] = "azerrty";
	char c[] = "fdfdg";
	printf("%d", ft_strcpy(&b, &c));
}
