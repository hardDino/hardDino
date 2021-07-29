#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i = '0';
    int k = '0';
    int j = '0';

    while(i <= 7) {
        while(k <= 8) {
            while(j <= 9) {
                ft_putchar(i);
                ft_putchar(k);
                ft_putchar(j);
                ft_putchar(',');
                ft_putchar(' ');
                j++;
            } 
            k++;
        }
        i++;
    }
}

int main(void) {
    ft_print_comb();
    return 0;
}