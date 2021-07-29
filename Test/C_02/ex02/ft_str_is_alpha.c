#include <stdio.h>
#include <unistd.h>

char ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i]);
            i++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
            i++;
        }
        else
        {
        return 0;
        }
    }
    return 1;
}

int main(void)
{
    char string[] = "hello1";
    ft_str_is_alpha(string);
}