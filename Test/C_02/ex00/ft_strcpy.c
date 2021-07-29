#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    { 
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return dest;
}

int main(void)
{
    char str1[3] = {'a', 'b', '\0'};
    char str2[3] = {'F', 'r', '\0'};

    ft_strcpy(str1, str2);
    printf("%s", ft_strcpy(str1, str2));
}