#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    int c;
    int d;
    div = &c;
    mod = &d;
    c = a / b;
    d = a % b;
    
    printf("%d\n", c);
    printf("%d\n", d);
}

int main(void)
{
    int temp1 = 33;
    int temp2 = 10;
    int *ptr1;
    int *ptr2;
    
    ft_div_mod(temp1, temp2, ptr1, ptr2);
}