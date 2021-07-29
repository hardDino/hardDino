#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	sortArrays(char *arrPtr1, char *arrPtr2)
{
	while (*arrPtr1 != '\0' || *arrPtr2 != '\0')
	{
		if (*arrPtr1 > *arrPtr2)
		{
			return (-1);
		}
		if (*arrPtr1 < *arrPtr2)
		{
			return (1);
		}
		arrPtr1++;
		arrPtr2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	result;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			result = sortArrays(argv[i], argv[j]);
			if (result == -1)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		ft_putstr(argv[i]);
		i++;
	}
}
