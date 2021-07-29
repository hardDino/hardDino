#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while (i <= n && src[i] != '\0')
    { 
        dest[i] = src[i];
        i++;
    }

    while (i <= n)
    { 
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
    unsigned int n = 12;
    char str1[20];
    char str2[12] = "Happy people";

    ft_strncpy(str1, str2, n - 1);
    printf("%s", ft_strncpy(str1, str2, n - 1));
}
