#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *arr, int size)
{
    int buff;
    int i;

    i = 0;
    while (i < (size /2))
    {
        buff = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = buff;
        i++;
    }
}

int main()
{
    int massive[7] = {1,2,3,4,5,6,7};
    int size;
    size = 7;

    ft_rev_int_tab(massive, size);
    return 0;
}