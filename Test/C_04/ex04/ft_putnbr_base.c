#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int exam_base(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if(base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i] < 32 || base[i] > 126)
            return (0);
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_size;
    int nbr_result[255];
    int i;

    i = 0;
    base_size = 0;
    if (exam_base(base))
    {
        if (nbr < 0)
        {
            nbr = -nbr;
            ft_putchar('-');
        }
        while(base[base_size])
            base_size++;
        while(nbr)
        {
            nbr_result[i] = nbr % base_size;
            nbr = nbr / base_size;
            i++;
        }
        while(--i >= 0)
            ft_putchar(base[nbr_result[i]]);
    }
}

int main(void)
{
    ft_putnbr_base(123, "abcdef");
    return (0);
}