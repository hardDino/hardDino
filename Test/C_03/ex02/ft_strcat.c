#include <stdio.h>
#include <unistd.h>
int ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (*dest)
    {
        i++;
    }
    while (dest[i] == '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

}

int main(void)
{
    char str1[10] = "AAAA";
    char str2[] = "BBBB";
    ft_strcat(str1,str2);
}