#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if(nb < 0)
    {
        return (0);
    }
    
    int result;

    result = 1;
    while(nb > 0)
    {
        result = result * nb;
        nb--;
    }

    return result;
}

int main(void)
{
    printf("%d", ft_iterative_factorial(5));
}
