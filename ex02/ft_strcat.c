char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
	{
		i1++;
	}
	while (src[i2])
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

#include<stdio.h>

int	main(void)
{
	char dest[50] = "Berat";
	char src[] = "Ali";
	printf("%s\n", ft_strcat(dest, src));
	printf("Now your dest is %s", dest);
}

