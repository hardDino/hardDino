#include <unistd.h>
#include <stdio.h>

int ft_integer(char *str, int integer)
{
  while(*str >= '0' && *str <= '9')
    {
      integer = integer * 10 + (*str - '0');
      str++;
    }

  return integer;
}

int    ft_atoi(char *str)
{
  int minus;
  int integer;

  integer = 0;
  minus = 1;
  while(*str)
  {
    while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' || *str == '\t' || *str == '\v')
    {
      str++;
    }
    while ((*str == '-' || *str == '+') && *str != ' ')
    {
      if (*str == '-')
        minus *= -1;
      str++; 
    }
    integer = ft_integer(str, integer);
	  integer = integer * minus;
    return integer;
  }
  return integer;
}                                                                     

int main(void)
{
    //char string[] = "  ---++ --+-1234f34";
    //ft_atoi(string);
    printf("%d", ft_atoi("   --++--12hf"));
    return 0;
}
