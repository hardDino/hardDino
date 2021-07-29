#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
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
    char string[] = "NNNN";
    ft_str_is_printable(string);
}