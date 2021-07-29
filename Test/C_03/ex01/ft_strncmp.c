#include <stdio.h>
#include <unistd.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && i < n)
    {
        if(s1[i] == '\0')
        {
          return 0;
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char str1[] = "12345";
    char str2[] = "12346";
    ft_strncmp(str1,str2,5);
}
