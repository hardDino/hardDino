#include <stdio.h>
#include <unistd.h>

char ft_str_is_uppercase(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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
    char string[] = "aaaaaNNNN12345";
    ft_str_is_uppercase(string);
}