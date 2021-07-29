#include <stdio.h>
#include <unistd.h>
char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32; 
            printf("%c", str[i]);
            i++;
        }
        else 
        {
            printf("%c", str[i]);
            i++;
        }
    }
    return str;
}

int main(void)
{
    char string[] = "fHfHjKpO";
    ft_strupcase(string);
}