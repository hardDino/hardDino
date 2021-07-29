#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

int main(void)
{
    ft_print_numbers();
}

void	ft_print_numbers(void)
{
    int		i;
	char	c;
    
    i = 48;

    while(i <= 57)
    {
        write(1, &i, 1);
        i++;
    }
}



