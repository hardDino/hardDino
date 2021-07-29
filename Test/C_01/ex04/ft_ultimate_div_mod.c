#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int *a, int *b)
{

    int e;
    e = *a;
    *a = *a / *b;
    *b = e % *b;
    
    printf("%d\n", *a);
    printf("%d", *b);

}

int main(void)
{
    int temp1 = 11;
    int temp2 = 3;
    int *ptr1;
    ptr1 = &temp1;
    int *ptr2;
    ptr2 = &temp2;
    
    ft_div_mod(ptr1, ptr2);
}