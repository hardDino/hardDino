#include <unistd.h>
#include <stdio.h>



void ft_print_alphabet(void)
{
    char character;

    character = 'a';
    
    while (character <= 'z')
    {
        write(1, &character, 1);
        character++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}