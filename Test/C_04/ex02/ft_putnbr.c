#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_subnbr(int nb)
{
    int i;
    i = 0;
    char str[10];

    while (nb > 0)
    {
        str[i] = nb % 10 + '0';
        nb = nb / 10;
        i++;
    }

    while (i != 0)
    {
        ft_putchar(str[i - 1]);
        i--;
    }
}

void    ft_putnbr(int nb)
{
    if (nb == 0)
    {
        ft_putchar('0');
    }
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    
    ft_subnbr(nb);
}                                                                             

int main(void)
{
    ft_putnbr(-2147483648);
}
