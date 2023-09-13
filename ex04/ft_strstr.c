char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i1;
	int	i2;
	i = 0;
	i1 = '\0';
	i2 = 0;
	while (str[i])
	{
		if (str[i] == to_find[i2] && i1 != 1)
		{
			while (to_find[i2])
			{
			
				if (str[i] == to_find[i2])
				{
					i1 = 1;
				}
				else
					i1 = '\0';
				i2++;
				i++;
			}
			i2 = 0;
		}
		i++;
	}
	if (i1 != '\0')
		return (to_find);
	else
		return ('\0');
}

#include<stdio.h>

int	main(void)
{
	char str[30] = "annemi seviyorum.";
	char to_find[] = "annem";

	char *result = (ft_strstr(str, to_find));
	if (result)
		printf("Aranan bulundu: %s\n", result);
	else
		printf("Aranan bulunamadı.\n");
}
