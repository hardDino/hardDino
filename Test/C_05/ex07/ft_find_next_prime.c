#include <stdio.h>

int check_prime(int nb)
{
    int i;
    
    i = 2;

    if (nb <= 1)
        return (0);

    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);

        i++;
    }

    return (1);
}

int ft_find_next_prime(int nb)
{
    //if(check_prime(nb) == 0 && nb <= 1)
        //return (2);
    if(check_prime(nb) == 1)
        return (nb);
    while(check_prime(nb) == 0)
        {
            nb++;
        }
    return (nb);
}

int main(void)
{
    printf("%d", ft_find_next_prime(4));
}