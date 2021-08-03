#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str, int i)
{
	while (*str != '\0')
	{
		write(i, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
    int fd;
    char buf;
    if (argc == 1)
    {
        ft_putstr("File name missing\n", 2);
    }
    if (argc > 2)
    {
        ft_putstr("Too many arguments\n", 2);
    }
    if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            ft_putstr("Cannot read file\n", 2);
            return (1);
        }
        while (!(read(fd, &buf, 1) == 0))
            write(1, &buf, 1);
        if (close(fd) == -1)
        {
            ft_putstr("close() error\n", 2);
            return (1);
        }
    }
    return (0);
}