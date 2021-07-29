#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb > 0)
    {
        while((long int) i * i < nb)
            i++;
        if ((long int) i * i > nb)
            return (0);
    }
    return (i);
}

int main(void)
{
   printf("%d", ft_sqrt(64));
}
