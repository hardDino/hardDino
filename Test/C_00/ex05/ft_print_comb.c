#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void);

int main(void)
{
    char digitals[3];

    digitals[0] = 48;
    digitals[1] = 48;
    digitals[2] = 48;

    while(digitals[0] <= '7')
    {
        digitals[1] = digitals[0] + 1;

        while (digitals[1] <= '8')
        {
            digitals[2] = digitals[1] + 1;

            while (digitals[2] <= '9')
            {
                write(1, &digitals, 1);

                if (digitals != '789')
                {
                    write(1, &", ", 1);
                }

                digitals[2]++;
            }
            digitals[1]++;
        }
        digitals[0]++;
    }
    write(1, "\n", 1);
}