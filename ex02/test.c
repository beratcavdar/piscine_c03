char	*ft_strcat(char *dest, char *src)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
	{
		i1++;
	}
	while(src[i2])
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
#include<stdio.h>

int		main(void)
{
	char	dest[50] = "bonjour";
	char	src[] = " les amis";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));
	printf("%s", dest);
}

