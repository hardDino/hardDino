#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char i = 48;
    char k = i + 1;
    char j = k + 1;

    while(i < 56) {
        while(k < 57) {
            while(j < 58) {
                ft_putchar(i);
                ft_putchar(k);
                ft_putchar(j);
                if (i != '7' || k != '8' || j != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                j++;
            } 
            k++;
            j = k + 1;
        }
        i++;
        k = i + 1;
        j = k + 1;
        
        
    }
}

int main() {
    ft_print_comb();
}