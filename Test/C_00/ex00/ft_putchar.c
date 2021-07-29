#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char k = 'k';
	ft_putchar(k);
}



