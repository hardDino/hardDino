#include <unistd.h>
#include <unistd.h>

void ft_is_negative(int);

int main(void)
{
    int i = -4;

    while(i < 4)
    {
        ft_is_negative(i);
        i++;
    }
}

void ft_is_negative(int a)
{
    if (a < 0)
        write(1, &"N", 1);
    else
        write(1, &"P", 1);
}

