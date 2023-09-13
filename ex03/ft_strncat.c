char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
	{
		i1++;
	}
	while (src[i2] && i2 < nb)
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
	char dest[50] = "Berat ";
	char src[] = "HumaHumaHuma";
	unsigned int nb = 5;
	printf("Dest first version is %s", dest);
	ft_strncat(dest, src, nb);
	printf("\nDest second version is %s", dest);
	printf("\n%s", strncat(dest, src, nb));
}

