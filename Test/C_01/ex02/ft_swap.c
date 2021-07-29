#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int d = 5;
    int e = 10;
    int *ptr1;
    int *ptr2;
    ptr1 = &d;
    ptr2 = &e;

    ft_swap(ptr1, ptr2);

    printf("%d\n", d);
    printf("%d", e);
}