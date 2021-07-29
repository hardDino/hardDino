#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a = 5;
    int *ptr;
    ptr = &a;
    ft_ft(ptr);

    printf("%d", a);
}