int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i <= n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include<stdio.h>

int	main(void)
{
	char s1[] = "Ankara";
	char s2[] = "Ankam";
	unsigned int n = 5;
	printf("%d", ft_strncmp(s1, s2, n));
}
