int             ft_strcmp(char *s1, char *s2)
{
        while (*s1 == *s2 && *s1)
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}
#include<stdio.h>

int     main(void)
{
        char str[] = "Berat";
        char str1[] = "Adem";
        printf("%d", ft_strcmp(str, str1));
}

